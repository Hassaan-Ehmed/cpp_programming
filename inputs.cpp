#include <iostream>

using namespace std; 

// cout or cin comes from standard namespace above 

// << insertion operator 
// extraction operator >>

int main(){
    int numx;


        // cout << "Type a number "; // cout to print values

        //     cin >> numx; // cin for taking input 

        //     cout << "Your Number is :: " << numx;


            string  greetMsg = "Welcome in our application, ";
            string name; 
            
            cout << "Hi tell me your name: ";

// taking input  extract it ad give to name variable  
            cin >> name;

            cout << greetMsg << name << endl;

            


    return 0;
}