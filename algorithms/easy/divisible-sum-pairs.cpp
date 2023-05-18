#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int lenght_of_vector, int sum_divisible_for_this, 
                      vector<int> vector_for_search_pairs) {
    int count_pairs = 0;
    sort(vector_for_search_pairs.begin(), vector_for_search_pairs.end());
    for (int i = 0; i < vector_for_search_pairs.size() ; i++) {
        int actual_element = vector_for_search_pairs[i];
        for (int k = (i+1); k < vector_for_search_pairs.size(); k++) {
            int other_elements = vector_for_search_pairs[k];
            bool element_sum_divisible = 
                ((actual_element + other_elements)%sum_divisible_for_this) == 0;

            if (element_sum_divisible) {
                count_pairs++;
            }
        }
    }

    return count_pairs;
}
