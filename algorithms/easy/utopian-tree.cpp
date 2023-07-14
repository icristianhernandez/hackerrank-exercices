#include <bits/stdc++.h>
/*
* 0 - Start
*
* 1 - Double
* 2 - +1
* 3 - Double 
* 4 - +1
* 5 - Double
* 6 - +1
*
*/

int utopianTree(int growth_cycles) {
    int end_height = 1;

    for (int i = 1; i <= growth_cycles; i++) {
        if(i % 2 != 0){
            end_height *= 2; 
        }
        else {
            end_height += 1;
        }
    }

    return end_height;
}
