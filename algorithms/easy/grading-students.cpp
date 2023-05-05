/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

int floor(int numberToFloor){
    if(numberToFloor <0){
        return numberToFloor - 1;
    }
    return numberToFloor;
}

int ceil(int numberToCeil){
    return floor(numberToCeil) + 1;
}

vector<int> gradingStudents(vector<int> grades) {
    // if the grades have a difference of 2 or lower to the next multiple of 5
    // the grandes roundup to the next multiple of 5
    vector<int> roundedGrades;
    for(int i = 0; i < grades.size() ; i++){
        int grade = grades[i];
        
        if(grade < 38){
            roundedGrades.push_back(grade);
        }
        else if (grade%5 >= 3) {
            int multiplierToNextMultOf5 = ceil( grade/5 );
            roundedGrades.push_back(5 * multiplierToNextMultOf5);
        }
        else{
            roundedGrades.push_back(grade);
        }
    }

    return roundedGrades;
}
