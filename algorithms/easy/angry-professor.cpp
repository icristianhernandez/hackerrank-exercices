string angryProfessor(int k, vector<int> a) {
    int in_time_students = 0;
    string msg = "";

    for(auto time_arrived : a) {
        if(time_arrived <= 0) {
            in_time_students++;
        }
    }

    if(in_time_students >= k) {
        msg = "YES";
    } else {
        msg = "NO";
    }

    return msg;
}
