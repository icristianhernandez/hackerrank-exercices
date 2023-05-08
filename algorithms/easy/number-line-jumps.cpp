string kangaroo(int x1, int v1, int x2, int v2) {
    double encouterTime = (x2 - x1) / (v1 - v2);
    int encounterTimeInt = encouterTime;

    // The movement are in jumps, so need to be int
    if(encouterTime != encounterTimeInt){
        return "NO";
    }

    // The time only pass forward :P
    if(encouterTime >= 0){
        return "YES";
    }
    else{
        return "NO";
    }
}
