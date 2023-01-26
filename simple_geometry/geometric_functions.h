#include <iostream>
#include <cmath>

class Triangle{
    public:
        float area(int base, int height){
            float a = (0.5)*base*height; 
            return a;
        }
        int perimeter(int side1, int side2, int side3){
            int p;
            if (side1+side2 > side3){
                p = side1 + side2 + side3;
                return p;
            }
            else{
                return 0;
            }
        }
        float pyramid(int base, int height, int length){
            float v = (1/3)*base*height*length;
            return v;
        }
};

class Rectangle{
    public:
        int perimeter(int length, int width){
            int p = (2*length)+(2*width); 
            return p;
        }
        int area(int length, int width){
            int a = length*width;  
            return a;
        }
        int cube(int side){
            int c = side*side*side;
            return c;
        }
        int rectangular_prism(int width, int height, int length){
            int rp = width*length*height;
            return rp;
        }
};

class Circle{
    public:
        float circumference(int radius){
            float c = 2*3.14*radius;    
            return c;
        }
        float area(int radius){
            float a = 3.14*radius*radius;
            return a;
        }
        float cylinder(int radius, int height){
            float cyl = 3.14*(radius*radius)*height;
            return cyl;
        }
        float sphere(int radius){
            float s = (4/3)*(radius*radius*radius);
            return s;
        }
    
};


