#include <iostream>
#include <stdio.h>
#include <fstream>
#include "simple_user.h"
using namespace std;

/* Simple exercise to read and write files
   using an extremely rudimentary log-in system.
   Not meant to be an actual system for information storage */

int main(){
    int first_choice;
    string username;
    string password;    
    string file_name = "user_cred.txt"; // wanted to use a json but this is the next best thing at the moment
    
    cout << "\t\t\tWELCOME!\n\n What would you like to do?\n [1] LOG IN \n [2] SIGN UP\n Enter choice: ";
    cin >> first_choice;

    if (first_choice == 1){
        cout << "Enter your username: ";
        cin >> username;
        logger(username, password, file_name);
        
    }
    else if (first_choice == 2){

        cout << "Enter your username (no spaces): ";
        cin >> username;
        cout << "Enter a password ";
        cin >> password;

        string full_credentials = username + " " + password + "\n";

        add_user(file_name, full_credentials);

        cout << "Account name " << username << " created.\n";

    }
    else {
        cout << "ERROR: not a valid choice\n";
    }
    
    return 0;

}


