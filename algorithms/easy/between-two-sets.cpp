#include <bits/stdc++.h>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
int maxIntInVectorInt(vector<int> vectorToFilter){
    int maxInt = vectorToFilter[0];
    for(long unsigned int i = 1; i < vectorToFilter.size(); i++){
        int actualElement = vectorToFilter[i];
        if(actualElement > maxInt){
            maxInt = actualElement;
        }
    }

    return maxInt;
}


bool vectorIntAreFactorOfInt(int int_to_check, vector<int> vector_factors){
    /*
    This function checks if all the elements of a vector are factors of an int
    Input: the vector of factors and the int to have these factors
    Output: true if all the elements of the vector are factors of the int, false otherwise
    */

    for (long unsigned int i = 0; i < vector_factors.size(); i++) {
        if(int_to_check%vector_factors[i] != 0){
            return false;
        }
    }   

    return true;
}

bool intIsFactorOfVectorInt(int int_to_check, vector<int> vector_to_factors){
    for (long unsigned int i = 0; i < vector_to_factors.size(); i++) {
        if(vector_to_factors[i]%int_to_check != 0){
            return false;
        }
    }

    return true;
}

int getTotalX(vector<int> a, vector<int> b) {
    int amount_int_satisfy_conditions = 0;
    int max_int = (maxIntInVectorInt(a) > maxIntInVectorInt(b) ) ? (maxIntInVectorInt(a)) : (maxIntInVectorInt(b));
    
    for(long unsigned int i = 1; i <= max_int/2; i++){
        if(intIsFactorOfVectorInt(i, b) and vectorIntAreFactorOfInt(i, a)){
            amount_int_satisfy_conditions++;
        }
    }

    return amount_int_satisfy_conditions;
}
// for a={3,4} and b={24, 48}; numbers are 6->12->24, my program gives 4 and 8

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
