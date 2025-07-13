/**
 * Problem: Match Players and Trainers
 * 
 * You are given two integer arrays:
 * - players[i]: represents the ability of the ith player
 * - trainers[j]: represents the training capacity of the jth trainer
 * 
 * A player can be matched with a trainer if:
 * - players[i] <= trainers[j]
 * - Each player and trainer can only be matched once
 * 
 * Goal: Return the maximum number of valid player-trainer matchings.
 * 
 * Approach:
 * - First approach I think of is greedy: 
 *   - Sort both vectors
 *   - Use two pointers to iterate and find max matches
 *   - A trainer can train a player only if player[i] <= trainer[j]
 */

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int ans = 0;
        
        // Sort both players and trainers to apply greedy matching
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        // i -> players , j -> trainers 
        int i = 0;
        int j = 0;

        // Traverse both arrays
        while (i < players.size() && j < trainers.size()) {
            // If current player can be matched with current trainer
            if (players[i] <= trainers[j]) {
                ans++;  // count as a match
                i++;    // move to next player
                j++;    // move to next trainer
            } else {
                // if player can't be trained by current trainer, try next trainer
                j++;
            }
        }

        return ans;
    }
};
