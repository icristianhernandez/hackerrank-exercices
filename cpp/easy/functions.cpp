#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vector_inputs = {};
    
    for(int i = 1; i <= 4; i++) {
        int input_number = 0;
        cin >> input_number;
        vector_inputs.push_back(input_number);
    }
    
    sort(vector_inputs.begin(), vector_inputs.end() );
    cout << vector_inputs[3];
    return 0;
}
