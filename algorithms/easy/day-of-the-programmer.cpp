bool yearIsLeap(int year){
    if(year >= 1700 and year <= 1917){
        return (year%4 == 0);
    }
    else{
        return ( (year%4 == 0 and year%100 != 0) or (year%400 == 0) );
    }
}

string dayOfProgrammer(int year) {
    bool year_is_leap = yearIsLeap(year);
    string date = "";
    
    if(year == 1918){
        date = "26.09." + to_string(year);
    }
    else if (year_is_leap){
        date = "12.09." + to_string(year);
    }
    else{
        date = "13.09." + to_string(year);
    }
    
    return date;
}