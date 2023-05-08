/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */
vector<int> getFruitsPosition(vector<int> fruit_fall_distance, int tree_point){
    vector<int> fruit_position = fruit_fall_distance;

    // the fruit fall an N distance from the tree, so adjust by the 
    // tree position
    for (int i = 0; i < fruit_position.size(); i++){
        fruit_position[i] += tree_point;
    }

    return fruit_position;
}

int getFruitAmountInHouse(vector<int> fruits_position_vector, int start_house,
                          int end_house) {
    int fruit_amount_in_house = 0;
    for (int i = 0; i < fruits_position_vector.size(); i++) {
        int fruit_position = fruits_position_vector[i];
        if((fruit_position >= start_house) and (fruit_position <= end_house)){
            fruit_amount_in_house++;
        }
    }

    return fruit_amount_in_house;
}

void countApplesAndOranges(int start_house_point, int end_house_point,
                           int apple_tree_point, int orange_tree_point,
                           vector<int> apples_fall_distance,
                           vector<int> oranges_fall_distance) {
    vector<int> apple_position = getFruitsPosition(apples_fall_distance,
                                                   apple_tree_point);
    vector<int> orange_position = getFruitsPosition(oranges_fall_distance,
                                                    orange_tree_point);

    int apples_in_house = getFruitAmountInHouse(apple_position, 
                                               start_house_point, 
                                               end_house_point);
    int oranges_in_house = getFruitAmountInHouse(orange_position, 
                                               start_house_point, 
                                               end_house_point);

    cout << apples_in_house << "\n" << oranges_in_house << "\n";
}

