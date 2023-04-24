int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n > 9){
        printf("Greater than 9");
    }
    else{
        printf("%s", numbers[n-1].c_str());
    };

    return 0;
}

