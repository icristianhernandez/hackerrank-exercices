/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int tallestCandle = 0;
    int amountOfCandle = 0;
    for(int i = 0; i < candles.size(); i++){
        if(candles[i] > tallestCandle){
            tallestCandle = candles[i];
            amountOfCandle = 1;
        }
        else if(candles[i] == tallestCandle){
            amountOfCandle++;
        }
    } 

    return amountOfCandle;
}
