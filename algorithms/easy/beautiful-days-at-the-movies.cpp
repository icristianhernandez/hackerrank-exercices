#include <bits/stdc++.h>
#include <string>
using namespace std;

int reversedOrderInt(int integer_to) {
    string int_as_str = to_string(integer_to);
    string reversed_string = "";

    for(int i = int_as_str.size() - 1; i >= 0; i--) {
        if(int_as_str[i] == '0' and i == 0) {
            break;
        }

        reversed_string += int_as_str[i];
    }

    return stoi(reversed_string); 
}

int beautifulDays(int start_range, int end_range, int divisible_by) {
    // Determine in [start_range, end_range], the ammount of days that are beautiful 
    // beautiful days: |day - reversed(day)| % divisible_by == 0
    int ammount_of_beautiful_days = 0;

    for(int i = start_range; i <= end_range; i++) {
        bool is_beautiful = (abs(i - reversedOrderInt(i)) % divisible_by) == 0;
        if(is_beautiful) {
            ammount_of_beautiful_days++;
        }
    }

    return ammount_of_beautiful_days;
}
