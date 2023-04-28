void miniMaxSum(vector<int> arr) {
    int long long unsigned minSum = 0; int long long unsigned maxSum = 0;
    sort(arr.begin(), arr.end());

    for (int i = 0; i <= 3; i++) {
        minSum+= arr[i];
    }
    for (int i = 1; i <= 4; i++) {
        maxSum+= arr[i];
    }

    cout << minSum << " " << maxSum << endl;
}
