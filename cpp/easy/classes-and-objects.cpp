class Student {
public:
    int scores[5] = {0, 0, 0, 0, 0};
    
    int calculateTotalScore(){
        int sums = 0;
        for (int score : this-> scores) {
            sums += score;
        }
        return sums;
    }
    
    void input(){
        for(int i = 0; i <= 4; i++) {
            cin >> scores[i];
        }
    }
};
