int countingValleys(int steps, string path) {
    int valleys_ammount = 0;
    int actual_sea_level = 0;
    bool entered_valley = false;
    bool exited_valley = false;
    
    for (char step : path) {
        int next_sea_level = actual_sea_level;
        if(step == 'U'){
            next_sea_level++;
        }
        else{
            next_sea_level--;
        }
        
        if(actual_sea_level == 0 and next_sea_level == -1){
            entered_valley = true;
        }
        else if(actual_sea_level == -1 and next_sea_level == 0){
            exited_valley = true;
        }
        
        if(entered_valley and exited_valley){
            valleys_ammount++;
            entered_valley = false;
            exited_valley = false;
        }
        
        actual_sea_level = next_sea_level;
    }
    
    return valleys_ammount;
}
