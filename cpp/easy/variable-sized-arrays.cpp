int main() {
    // First line are lenght of two array
    // the first array it's of {vectors -> int}
    // the next array it's of query in the form {n vector, m int}
    // i need return all the integer product of the querys 
    int element_vector_size = 0;
    int querys_ammount = 0;
    vector< vector<int> > element_vector;
    cin >> element_vector_size;
    cin >> querys_ammount;
    
    
    for(int i = 0; i < element_vector_size; i++) {
        element_vector.push_back({});
        int sub_vector_size = 0;
        cin >> sub_vector_size;
        
        for(int k = 0; k < sub_vector_size; k++) {
            int element = 0;
            cin >> element;
            element_vector[i].push_back(element);
        }
        
    }
    
    for(int query_i = 0; query_i < querys_ammount; query_i++) {
        int what_array = 0;
        int what_element = 0;
        cin >> what_array;
        cin >> what_element;
        
        cout << element_vector[what_array][what_element] << "\n";
    }
    
    return 0;
}
