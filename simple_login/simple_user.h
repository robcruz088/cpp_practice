#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
//#include <jsoncpp/json/json.h>


// add username and password to credential txt file
void add_user(std::string filename, std::string user_credentials){
        std::ofstream write_file;
        write_file.open(filename, std::ios::app);
        write_file << user_credentials;
} 

/* "log in" to the "system." Find the username in the file and then the password.
    Unfortunately if two users have the same password it cannot detect for a specific user.
    This is just an exercise to practice with cpp so that is outside of the scope of the exercise */
void logger(std::string username, std::string password, std::string file_name){
    std::ifstream read_file(file_name);
    std::string line;
    while (getline (read_file, line)){
        if (line.find(username) != std::string::npos){
            std::cout << "Enter your password: ";
            std::cin >> password;
            if (line.find(password) != std::string::npos){
                std::cout << "You are logged in!\n";
            } 
            else{
                std::cout << "Wrong username or password\n";
            }
        }
    }
} 











