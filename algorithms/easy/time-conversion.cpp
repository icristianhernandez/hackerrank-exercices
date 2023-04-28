// Need search about strings, vectors, and what are & and *
// hourIs12 not activated
#include<iostream>
using namespace std;

string timeConversion(string s) {
    int sLastIndex = s.length() - 1;

    // get hourUnit
    string hourUnit = "";
    for(int i = sLastIndex - 1; i <= sLastIndex; i++){
        hourUnit += s[i];
    }

    // get hour
    string hour = "";
    for(int i = 0; i <= (sLastIndex - 2); i++){
        hour += s[i];
    }

    // if hour is 12
    char hourFirstNumber = hour[0];
    char hourSecondNumber= hour[1];
    bool hourIs12 = false;
    if((hourFirstNumber == '1') && (hourSecondNumber == '2')){
        hourIs12 = true;
    }

    if(hourUnit == "AM"){
        if(hourIs12){
            hour[0] = '0';
            hour[1] = '0';
        }
        return hour; 
    }
    else {
        if(hourIs12){
            return hour;
        }

        /* 
        transform hourFirstNumber and hourSecondNumber to int
        after, sum 1 to hourFirstNumber, sum 2 to hourSecondNumber
        transform both to char again and change hour
        */
        int hourFirstNumberInt = hourFirstNumber - '0';
        int hourSecondNumberInt = hourSecondNumber - '0';
        hourFirstNumberInt += 1;
        hourSecondNumberInt += 2;
        
        // transform both to character again
        hourFirstNumber = hourFirstNumberInt + '0';
        hourSecondNumber = hourSecondNumberInt + '0';

        hour[0] = hourFirstNumber;
        hour[1] = hourSecondNumber;

        return hour;
    }
}

int main(){
    // // an array of unit test for timeConversion
    // string testCases[5] = {"07:05:45PM", "12:00:00AM", "12:00:00PM", "11:59:59AM", "11:59:59PM"};
    // // unit test for timeConversion
    // for(int i = 0; i < 5; i++){
    //     cout << testCases[i] << " -> " << timeConversion(testCases[i]) << endl;
    // }
    
    // Unit test with 12:00:00AM of timeConversion
    cout << "12:00:00AM -> " << timeConversion("12:00:00AM") << endl;
    // Unit test with 12:00:00PM of timeConversion
    cout << "12:00:00PM -> " << timeConversion("12:00:00PM") << endl;

    return 0;
}

