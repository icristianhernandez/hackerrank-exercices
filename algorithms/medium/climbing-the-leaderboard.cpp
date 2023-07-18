#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> noRepeatedNumberOrderedVector(const vector<int> ordered_vector) {
    vector<int> no_repeated_vector = {};

    int last_number_added = ordered_vector[0];
    no_repeated_vector.push_back(ordered_vector[0]);

    for(int i = 1; i < ordered_vector.size(); i++) {
        if(last_number_added > ordered_vector[i] ) {
            no_repeated_vector.push_back(ordered_vector[i] );
            last_number_added = ordered_vector[i];
        }
    }

    return no_repeated_vector;
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> new_rankings = {};
    vector<int> no_repeated_ranked = noRepeatedNumberOrderedVector(ranked);
    // added 0 for adapt the algorithm to the case that the player record it's 
    // lower than all the rankeds
    no_repeated_ranked.push_back(0);
    int last_index_checked_rank = no_repeated_ranked.size() - 1;

    for(auto player_record : player) {
        for(int i = last_index_checked_rank; i >= 0; i--) {
            int ranked_record = no_repeated_ranked[i];

            if(player_record == ranked_record) {
                new_rankings.push_back(i + 1);
                last_index_checked_rank = i;
                break;
            }
            else if(player_record < ranked_record) {
                new_rankings.push_back(i + 1 + 1);
                last_index_checked_rank = i + 1;
                break;
            }
            else if(i == 0) {
                new_rankings.push_back(i+ 1);
                last_index_checked_rank = i ;
                break;
            }
        }
    }

    return new_rankings;
}

