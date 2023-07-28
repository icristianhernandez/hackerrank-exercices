#include <bits/stdc++.h>

int saveThePrisoner(int n, int m, int s) {
    // Notes:
    // 1. Why not use % operator?
    // 2. Why,in c_d, have a -2 instead of -1?
    //      Can be to adapt the domain [0, n-1]
    double c_d = (m + s - 2) / n; 
    int c = floor( c_d );
    int f = m + s - n * c - 1;

    // Better answer:
    // return (m + s - 2) % n + 1;
    // Just reemplace the floor function with % operator

    return f;
}
