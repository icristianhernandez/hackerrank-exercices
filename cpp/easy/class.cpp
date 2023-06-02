#include <string>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    int get_age() {
        return age;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    int get_standard() {
        return standard;
    }

    void set_age(int new_age) {
        age = new_age;
    }
    void set_first_name(string new_first_name) {
        first_name = new_first_name;
    }
    void set_last_name(string new_last_name) {
        last_name = new_last_name;
    }
    void set_standard(int new_standard){
        standard = new_standard;
    }

    string to_string() {
        return std::to_string(age) + "," 
            + first_name + "," 
            + last_name + ","
            + std::to_string(standard);
    }
};
