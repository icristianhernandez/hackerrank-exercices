#include <iostream>
#include <string>
using namespace std;

int main() {
    int first_input_int = 0;
    int second_input_int = 0;
    cin >> first_input_int;
    cin >> second_input_int;
    
    for(int i = first_input_int; i <= second_input_int; i++){
        string cout_message = "";
        
        if(i >= 1 and i <= 9){
            if(i == 1){cout_message = "one";}
            else if (i == 2){cout_message = "two";}
            else if (i == 3){cout_message = "three";}
            else if (i == 4){cout_message = "four";}
            else if (i == 5){cout_message = "five";}
            else if (i == 6){cout_message = "six";}
            else if (i == 7){cout_message = "seven";}
            else if (i == 8){cout_message = "eight";}
            else if (i == 9){cout_message = "nine";}
        }
        else if(i % 2 == 0){
            cout_message = "even";
        }
        else{
            cout_message = "odd";
        }        
        
        cout << cout_message << "\n";
    } 
    return 0;
}
