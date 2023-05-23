/*
Manual Test to:
10 2 3
3 1
5 2 8

Expected 9
*/

int findClosestBelowIndexInSortedVector(vector<int> sorted_vector_for_search, int number_to_search){
	/*
	This function recives a sorted vector and find the most closest below number to number_to_search. 
	Then, return the index of that value.
	If the vector have a number equal to number_to_search, return the index of that number.
	If the vector doesn't have a number close below (all number are higher), return -1
	*/

	int min_index = 0;
	int max_index = sorted_vector_for_search.size() - 1; 

	while(min_index != max_index){
		int middle_index = floor(min_index + max_index);
		int middle_value = sorted_vector_for_search[middle_index];

		if(middle_value == number_to_search){
			return middle_index;
		}
		else if(middle_value < number_to_search){
			min_index = middle_index + 1;
		}
		else if(middle_value > number_to_search){
			max_index = max_index - 1;
		}
	}

	if (sorted_vector_for_search[min_index] > number_to_search){
		return -1;
	}

	return max_index;
}

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
	vector<int> keyboards_sorted = keyboards;
	vector<int> drives_sorted = drives;
	sort(keyboards_sorted.begin(), keyboards_sorted.end() );
	sort(drives_sorted.begin(), drives_sorted.end() );

	int keyb_max_price_lower_than = b - drives_sorted[0];
	int keyb_max_price_index = findClosestBelowIndexInSortedVector(keyboards_sorted, keyb_max_price_lower_than);
	if (keyb_max_price_index == -1){
		return -1;
	}

	int drives_max_price_lower_than = b - keyboards_sorted[keyb_max_price_index];
	int drives_max_price_index = findClosestBelowIndexInSortedVector(drives_sorted, drives_max_price_lower_than);
	if (drives_max_price_index == -1){
		return -1;
	}

	int most_expensive_purchase = keyboards_sorted[keyb_max_price_index] 
								  + drives_sorted[drives_max_price_index];
	
	return most_expensive_purchase;
}
