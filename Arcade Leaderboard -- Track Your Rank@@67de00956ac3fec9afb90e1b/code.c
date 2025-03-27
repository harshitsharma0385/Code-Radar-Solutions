#include <stdio.h>

// Function to find the rank using binary search
int findRank(int scores[], int size, int playerScore) {
    int low = 0, high = size - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (scores[mid] == playerScore)
            return mid + 1; // Rank is index + 1 (1-based ranking)
        else if (scores[mid] < playerScore)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    return low + 1; // New rank position
}

int main() {
    int n, m;

    // Read leaderboard size
    scanf("%d", &n);
    int leaderboard[n];

    // Read leaderboard scores (descending order)
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    // Create an array for unique scores (removing duplicates)
    int uniqueScores[n], uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            uniqueScores[uniqueCount++] = leaderboard[i];
        }
    }

    // Read number of games played
    scanf("%d", &m);
    int playerScores[m];

    // Read player's game scores
    for (int i = 0; i < m; i++) {
        scanf("%d", &playerScores[i]);
    }

    // Find player's rank after each game
    for (int i = 0; i < m; i++) {
        int rank = findRank(uniqueScores, uniqueCount, playerScores[i]);
        printf("%d\n", rank);
    }

    return 0;
}
