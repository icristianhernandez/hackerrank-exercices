/*
most expensive pair of keyboard and drive that a person can buy
*/ 
#include <bits/stdc++.h>
using namespace std;

// I are going to assume that the most expensive pair is one of two: 
// a) the most expensive keyboard who can allow to buy the least expensive drive 
// b) viceversa

/* 
error:
10 2 3
3 1
5 2 8

Expected 9 but return  -1
9 it's: 1 in keyboard, 8 in drives
*/

int highestValueUnderRange(vector<int> values_vector, int highest_value, 
                           int lower_value) {
    int the_value = 0;

    for(int i = values_vector.size() - 1; i >= 0; i--) {
        if(values_vector[i] >= lower_value and 
           values_vector[i] <= highest_value ) {

            the_value = values_vector[i];
            break;
        }
    }

    return the_value;
}

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int highest_for_expend = 0;
    sort(keyboards.begin(), keyboards.end() );
    sort(drives.begin(), drives.end() );

    int least_expensive_keyboard = keyboards[0];
    int least_expensive_drive = drives[0];

    int most_expensive_keyboard_possible = highestValueUnderRange(keyboards, b - least_expensive_drive, least_expensive_drive);
    int most_expensive_drive_possible = highestValueUnderRange(drives, b - least_expensive_keyboard, least_expensive_keyboard);

    cout << "final values: " << endl;
    cout << least_expensive_keyboard << " + "<< most_expensive_drive_possible << endl;
    cout << least_expensive_drive << " + " << most_expensive_keyboard_possible << endl;
    if(most_expensive_drive_possible == 0 and most_expensive_keyboard_possible == 0){
        highest_for_expend = -1;
    }
    else{
        int one_try = least_expensive_drive + most_expensive_keyboard_possible;
        int second_try = least_expensive_keyboard + most_expensive_drive_possible;

        highest_for_expend = (one_try > second_try) ? (one_try) : (second_try);
    }

    return highest_for_expend;
}
