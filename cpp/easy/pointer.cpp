void update(int *a,int *b) {
    int ax = *a;
    int bx = *b;
    *a = ax + bx;
    
    if(ax >= bx){
        *b = ax - bx;
    }
    else{
        *b = bx - ax;
    }
}
