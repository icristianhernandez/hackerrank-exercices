int maxIntVector(vector<int> max_of){
    int max_int_vector = max_of[0];
    
    for (int const& element : max_of) {
        if(max_int_vector < element){
            max_int_vector = element;
        }
    }
    
    return max_int_vector;
}

int hurdleRace(int k, vector<int> height) {
    int tallest_hurdle = maxIntVector(height); 
    
    if(k < tallest_hurdle) {
        return tallest_hurdle - k;
    }
    else {
        return 0;
    }
}
