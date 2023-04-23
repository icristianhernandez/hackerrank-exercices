/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int firstDiagonal = 0; int secondDiagonal = 0;
    for(int i = 0; i < arr.size(); i++){
        firstDiagonal += arr[i][i];
        secondDiagonal += arr[(arr.size()-1) - i][i];
    }
    int absoluteDifference = abs(firstDiagonal - secondDiagonal);

    return absoluteDifference;
}
