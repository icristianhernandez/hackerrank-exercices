
/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

// search for series of M longitude. 
// These serie need to sum D 
// These series are searched in S

int birthday(vector<int> chocolate_bars, int birth_day, int birth_month) {
    int amount_of_sub_arrays_checks = 0;

    for (int i = 0; i < chocolate_bars.size(); ++i) {
        if ( (chocolate_bars.size() - i) >= birth_month) {
            int subarray_bars_sum = 0;

            for (int k = i ; k < (birth_month + i); k++) {
                subarray_bars_sum += chocolate_bars[k];
            }

            if(subarray_bars_sum == birth_day){
                amount_of_sub_arrays_checks++;
            }
        }
    }

    return amount_of_sub_arrays_checks;
}

