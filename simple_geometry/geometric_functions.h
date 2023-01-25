#include <iostream>
#include <cmath>

class Triangle{
    public:
        float area(int base, int height){
            float a;
            a = (1/2)*base*height;                   
        }
        int perimeter(int side1, int side2, int side3){
            int p;
            p = side1 + side2 + side3;
        }
        float pyramid(int base, int height, int length){
            float v = (1/3)*base*height*length;
        }
};

class Rectangle{
    public:
        int perimeter(int length, int width){
            int p = (2*length)+(2*width);        
        }
        int area(int length, int width){
            int a = length*width;    
        }
        int cube(int side){
            int c = side*side*side;
        }
        int rectangular_prism(int width, int height, int length){
            int rp = width*length*height;
        }
};

class Circle{
    public:
        float circumference(int radius){
            float c = 2*3.14*radius;        
        }
        float area(int radius){
            float a = 3.14*radius;
        }
        float cylinder(int radius, int height){
            float cyl = 3.14*(radius*radius)*height;
        }
        float sphere(int radius){
            float s = (4/3)*(radius*radius*radius);
        }
    
};


