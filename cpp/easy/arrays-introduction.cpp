int main() {
    int vector_lenght = 0;
    vector<int> vector_int = {};
    
    cin >> vector_lenght;
    for (int i = 0;  i < vector_lenght; i++) {
        int placeholder = 0;
        cin >> placeholder;
        vector_int.push_back(placeholder);
    }
    
    for (int i = (vector_lenght - 1); i >= 0; i--){
        cout << vector_int[i] << " ";
    }
    
    return 0;
}
