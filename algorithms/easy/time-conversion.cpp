// Need search about strings, vectors, and what are & and *
// hourIs12 not activated

string timeConversion(string s) {
    int sLastIndex = s.length() - 1;

    // get hourUnit
    string hourUnit = "";
    for(int i = sLastIndex - 1; i <= sLastIndex; i++){
        hourUnit += s[i];
    }

    // get hour
    string hour = "";
    for(int i = 0; i <= sLastIndex - 2; i++){
        hour += s[i];
    }

    // if hour is 12
    int hourFirstNumber = hour[0];
    int hourSecondNumber= hour[1];
    bool hourIs12 = false;
    if((hourFirstNumber == 1) && (hourSecondNumber == 2)){
        hourIs12 = true;
    }


    if(hourUnit == "AM"){
        if(hourIs12){
            hour[0] = 0;
            hour[1] = 0;
        }
        return hour; 
    }
    else {
        if(!hourIs12){
            hourFirstNumber += 1;
            hourSecondNumber += 2;

            hour[0] = hourFirstNumber;
            hour[1] = hourSecondNumber;
        }

        return hour;
    }
}
