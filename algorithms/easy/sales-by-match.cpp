int sockMerchant(int n, vector<int> ar) {
    int pairs_of_socket = 0;
    
    map<int, int> socket_ammount_per_color;
    for (int socket_by_color : ar) {
        socket_ammount_per_color[socket_by_color]++;
    }
    
    for (const auto& [key, value] : socket_ammount_per_color) {
        pairs_of_socket += floor( value / 2);
    }
    
    return pairs_of_socket;
}