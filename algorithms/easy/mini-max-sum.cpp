/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

// I think the error is in the indexing of the array
// Have problem with arrays of size <5

int sum_array_elements_range(vector<int> arr, int start, int end) {
    int long long sumTotal = 0;
    for (int i = start; i <= end; i++) {
        sumTotal+= arr[i];
    }
    return sumTotal;
}

void miniMaxSum(vector<int> arr) {
    int long long minSum = 0; int long long maxSum = 0;
    sort(arr.begin(), arr.end());
    minSum = sum_array_elements_range(arr, 0, arr.size() - 1 - 1);
    maxSum = sum_array_elements_range(arr, 1, arr.size() - 1);
    cout << minSum << " " << maxSum << endl;
}
