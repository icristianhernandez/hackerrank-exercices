#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int intInp; long int longInp; char charInp;
    float floatInp; double doubleInp;
    
    scanf("%d %ld %c %f %lf", &intInp, &longInp, &charInp, &floatInp, &doubleInp);
    
    printf("%d", intInp);
    printf("\n%ld", longInp);
    printf("\n%c", charInp);
    printf("\n%f", floatInp);
    printf("\n%lf", doubleInp);
    
    return 0;
}
