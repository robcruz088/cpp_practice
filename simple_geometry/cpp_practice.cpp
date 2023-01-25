#include <iostream>
using namespace std;

/* Program to give the volume of various geometric shapes
   done as an exercise to practice with c++ */

// Classes for Perimeter, Area, and Volume


int main() {
    string option;   
    string keep_going; 
    string geometric_object;
    bool repeat = true;
    
    while (repeat){
        cout << "Choose from the following options\n -Perimeter\n -Area\n -Volume\n";
        cin >> option;
        if (option == "Perimeter" || option == "perimeter"){
            // ### PERIMETER CLASS ###
            cout << "Perimeter works\nKeep going? (Y/N): ";
            cin >> keep_going;
            if (keep_going == "n" || keep_going == "no" || keep_going == "No"){
                repeat = false;
            }
            else{
                repeat = true;            
            }
            
        }
        else if (option == "Area" || option == "area"){
            // ### AREA CLASS ###
            cout << "Area works\nKeep going? (Y/N): ";
            cin >> keep_going;
            if (keep_going == "n" || keep_going == "no" || keep_going == "No"){
                repeat = false;
            }
            else{
                repeat = true;            
            }
        }
        else if (option == "Voluume" || option == "volume"){
            // ### VOLUME CLASS ###
            cout << "Volume works\nKeep going? (Y/N): ";
            cin >> keep_going;
            if (keep_going == "n" || keep_going == "no" || keep_going == "No"){
                repeat = false;
            }
            else{
                repeat = true;            
            }
        }
    }
    return 0;
} 
