#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int total_liked = 0;
    int actual_shared = 5;

    for(int i = 1; i <= n; i++) {
        int liked_viewed = floor(actual_shared / 2);
        total_liked += liked_viewed;
        actual_shared = liked_viewed * 3;
    }

    return total_liked;
}
