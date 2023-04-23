/*
See that the problem is about precision.
I need use double type for all values.
Double in the result for having the most precise decimals.
*/

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    double positiveAmount = 0; double negativeAmount = 0; double zeroAmount = 0;

    // Calculating the amount of positive, negative and zero values:
    for(int valuesArray : arr){
        if(valuesArray > 0){
            positiveAmount++;
        }else if(valuesArray < 0){
            negativeAmount++;
        }else{
            zeroAmount++;
        }
    }
    double arraySize = positiveAmount + negativeAmount + zeroAmount;
    double positiveRatio = positiveAmount / arraySize;
    double negativeRatio = negativeAmount / arraySize;
    double zeroRatio = zeroAmount / arraySize;

    // Print the ratios:
    cout << positiveRatio << "\n";
    cout << negativeRatio << "\n";
    cout << zeroRatio << "\n";
}

