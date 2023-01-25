#include <iostream>
#include <cmath>
using namespace std;

class triangle{
    public:
        float area(int base, int height){
            float a;
            a = (1/2)*base*height;                   
        }
        int perimeter(int side1, int side2, int side3){
            int p;
            p = side1 + side2 + side3;
        }
}

class rectangle{
    public:
        int perimeter(int length, width){
            p = (2*length)+(2*width);        
        }
        int area(int lenght, widtht{
            a = length*width;    
        }
}

class circle{
    public:
        float circumference(int radius){
            c = 2*3.14*radius        
        }
        float area(int radius){
            a = pi*radius
        }
    
}
