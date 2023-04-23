/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void cout_string_n_amounts(int amounts, string strToRepeat) {
    for (int i = 1; i <= amounts; i++) {
        cout << strToRepeat;
    }
}

void staircase(int staircaseSize) {
    for(int shards = 1; shards <= staircaseSize; shards++) {
        cout_string_n_amounts(staircaseSize - shards, " ");
        cout_string_n_amounts(shards, "#");
        cout << "\n";
    }
}

