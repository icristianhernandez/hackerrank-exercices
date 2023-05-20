void bonAppetit(vector<int> bill, int k, int b) {
    int anna_shared_bill = 0;
    for (int i = 0; i < bill.size(); ++i){
        if(i != k){
            anna_shared_bill+= bill[i];
        }
    }
    anna_shared_bill /= 2;
    
    if (b == anna_shared_bill){
        cout << "Bon Appetit";
    }
    else{
        cout << (b - anna_shared_bill);
    }
}