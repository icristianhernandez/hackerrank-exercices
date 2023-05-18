/* 
I have an array of the sight of birds and each sight is marked by their ID.
What I need to do, is search the highest sighted and return the lower ID of the highest sighted.

I can create a type of map with each ID and the number of times it appears.
Then I can search the highest number of times and return the ID.

For that, I are going to need to create a expandible map who add the ID and the number of times it appears.
Then, I need to search the highest number of times and return the ID.
*/
#include <bits/stdc++.h>
#include <map>
using namespace std;

int migratoryBirds(vector<int> arr) {
    int highest_sighted_lower_id = arr[0];
    map<int, int> birds_sighted;

    // Create the table with each ID and the number of time sighted
    for(int i = 0; i < arr.size(); i++){
        birds_sighted[arr[i]]++;
    }

    // Search for the most sighted value
    for (const auto v : birds_sighted) {
        // revise for the most highest value and save the lowest id
        if(v.second > birds_sighted[highest_sighted_lower_id]){
            highest_sighted_lower_id = v.first;
        }
        else if(v.second == birds_sighted[highest_sighted_lower_id]){
            if( v.first < highest_sighted_lower_id){
                highest_sighted_lower_id = v.first;
            }
        }
    }

    return highest_sighted_lower_id;
}
