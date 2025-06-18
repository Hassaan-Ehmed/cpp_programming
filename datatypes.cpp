#include <iostream>

using namespace std;

    int main(){

        // Declare variables of different data types
        int num = 9;
        float price = 45.81F;
        char grade = 'A';
        bool isLogin = true;
        string name  =  "Hello World";
        double largeNumber = 123456789.987321;
        long long longsalary = 239048324820448L;
        auto autoVar = false; // auto type deduction - auto keyword automatically detect datatype based on the value that we assignto it 

        cout  << "Integer value is: " << num << endl;
        cout << "Float value is: " << price << endl;
        cout << "Character value is: " << grade << endl;
        cout << "Boolean value is: " << isLogin << endl;
        cout << "String value is: " << name << endl;
        cout << "Double value is: " << largeNumber << endl;
        cout << "Long value is: " << longsalary << endl;
            
            cout << "Hi auto wale" << autoVar << endl;

        return 0;
    }
