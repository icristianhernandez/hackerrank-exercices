vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    
    vector<int> new_player_scores(player.size() );
    vector<int> ranked_copy = ranked;
    
    for (int i = 0; i < player.size(); i++) {
        int player_score = player[i];
        int actual_rank = 1;
        int actual_score = ranked_copy[0];
        
        for (int k = 0; k < ranked_copy.size(); k++) {
            int rank_score = ranked_copy[k];
            
            if(k == 0 and (player_score > actual_score) ){
                new_player_scores[i] = actual_rank;
                break;
            }
            
            if (actual_score == player_score ) {
                new_player_scores[i] = actual_rank;
                break;
            }
            else if (rank_score < actual_score) {
                if(rank_score < player_score) {
                    actual_rank++;
                    new_player_scores[i] = actual_rank;
                    break;
                }
                else{
                    actual_rank++;
                    actual_score = rank_score;
                }
            }
            if (k == (ranked_copy.size() - 1) ) {
                if(actual_score == player_score){
                    actual_rank--;
                }
                
                actual_rank++;
                new_player_scores[i] = actual_rank;
                break;
            }
        }
    }


    return new_player_scores;
}
