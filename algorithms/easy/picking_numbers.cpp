int pickingNumbers(vector<int> a) {
    int longest_substring = 2;
    vector<int> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end() );
    
    map<int, int> substring_large;
    int actual_range_start = 0;
    int actual_range_end = 0;
    int actual_substring = 1;
    
    for (int i = 0; i < a_sorted.size(); i++) {
        int actual_value = a_sorted[i];
        int diff_range = abs(actual_value - a_sorted[actual_range_start]);
        
        if( diff_range <= 1){
            actual_range_end = i;
            
            if (i == (a_sorted.size() - 1) ) {
                int range_large = actual_range_end - actual_range_start + 1;
                substring_large[actual_substring] = range_large;
            }
        }
        else{
            int range_large = actual_range_end - actual_range_start + 1;
            substring_large[actual_substring] = range_large;
            
            // reset range
            actual_substring++;
            actual_range_start = i;
            actual_range_end = i;
        }
        
        for (const auto& pair : substring_large) {
            if(pair.second > longest_substring){
                longest_substring = pair.second;
            }
        }
    }
    
    return longest_substring;
}
