#include <iostream>
using namespace std;
#include "geometric_functions.h"

/* Program to give the volume of various geometric shapes
   done as an exercise to practice with c++ */

// Classes for Perimeter, Area, and Volume


int main() {
    // standard variables for the program
    string option, keep_going, geometric_object;  
    bool repeat = true;

    // variables from the header file
    Rectangle rect;
    Triangle tri;
    Circle circle;

    // Variables for taking inputs 
    int num1,num2,num3;
    
    while (repeat){
        cout << "Choose from the following options\n -Perimeter\n -Area\n -Volume\n";
        cin >> option;

        // Perimeter of the shapes
        if (option == "Perimeter" || option == "perimeter"){
            cout << "Which shape do you need help with?\n -Triangle\n -Rectangle\n -Circle\n";
            
            cin >> geometric_object;
            if (geometric_object == "triangle" || geometric_object == "Triangle"){
                cout << "Enter the lenght of the 3 sides of the triangle: ";
                cin >> num1 >> num2 >> num3;
                cout << "Perimeter of the triangle is: " << tri.perimeter(num1, num2, num3) << endl;
            }

            if (geometric_object == "rectangle" || geometric_object == "Rectangle" || geometric_object == "rect"){
                cout << "Enter the lenght and width of the rectangle: ";
                cin >> num1 >> num2;
                cout << "Perimeter of the rectangle is: " << rect.perimeter(num1,num2) << endl;
            }

            if (geometric_object == "circle" || geometric_object == "Circle"){
                cout << "Enter the Radius of the circle: ";
                cin >> num1;
                cout << "Circumference of the circle is: " << circle.circumference(num1) << endl;
            }

            cout << "Need more help? (Y/N): ";
            cin >> keep_going;
            if (keep_going == "n" || keep_going == "no" || keep_going == "No"){
                repeat = false;
            }
            else{
                repeat = true;            
            }
            
        }

        // Area of the shapes
        else if (option == "Area" || option == "area"){
            cout << "Which shape do you need help with?\n -Triangle\n -Rectangle\n -Circle\n";
            cin >> geometric_object;
            
            if (geometric_object == "triangle" || geometric_object == "Triangle"){
                cout << "Enter the base and height of the triangle: ";
                cin >> num1 >> num2;
                cout << "Area of the triangle is: " << tri.area(num1,num2) << endl;
            }

            if (geometric_object == "rectangle" || geometric_object == "Rectangle" || geometric_object == "rect"){
                cout << "Enter the lenght and width of the rectangle: ";
                cin >> num1 >> num2;
                cout << "Area of the rectangle is: " << rect.area(num1,num2) << endl;
            }

            if (geometric_object == "circle" || geometric_object == "Circle"){
                cout << "Enter the Radius of the circle: ";
                cin >> num1;
                cout << "Area of the circle is: " << circle.area(num1) << endl;
            }

            cout << "Need more help? (Y/N): ";
            cin >> keep_going;
            if (keep_going == "n" || keep_going == "no" || keep_going == "No"){
                repeat = false;
            }
            else{
                repeat = true;            
            }
        }

        // Volume of the shapes
        else if (option == "Volume" || option == "volume"){
            cout << "Which shape do you need help with?\n -Pyramid\n -Cube\n -Rectangular Prism\n -Sphere\n -Cylinder\n";
            cin >> geometric_object;

            if (geometric_object == "pyramid" || geometric_object == "Pyramid"){
                cout << "Enter the base width, height and base length of the pyramid: ";
                cin >> num1 >> num2 >> num3;
                cout << "Volume of the pyramid is: " << tri.pyramid(num1,num2,num3) << endl;
            }

            if (geometric_object == "cube" || geometric_object == "Cube"){
                cout << "Enter the side lenght of the cude: ";
                cin >> num1;
                cout << "Volume of the cube is: " << rect.cube(num1) << endl;
            }

            if (geometric_object == "rectangular prism" || geometric_object == "Rectangular prism" || geometric_object == "Rectangular Prism"){
                cout << "Enter the side width, height, length of the rectangular prism: ";
                cin >> num1 >> num2 >> num3;
                cout << "Volume of the rectangular prism is: " << rect.rectangular_prism(num1,num2,num3) << endl;
            }

            if (geometric_object == "sphere" || geometric_object == "Sphere"){
                cout << "Enter the Radius of the sphere: ";
                cin >> num1;
                cout << "Volume of the sphere is: " << circle.sphere(num1) << endl;
            }

            if (geometric_object == "cylinder" || geometric_object == "Cylinder"){
                cout << "Enter the Radius and height of the cylinder: ";
                cin >> num1 >> num2;
                cout << "Volume of the cylinder is: " << circle.cylinder(num1,num2) << endl;
            }

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
