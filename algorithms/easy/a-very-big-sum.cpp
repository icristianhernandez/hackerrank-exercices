/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for (long valuesArray : ar) {
        sum += valuesArray;
    }
    return sum;

}
