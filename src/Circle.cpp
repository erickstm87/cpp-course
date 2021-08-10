#include "../header/Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(double radius) {
    radius = 3.00;
}
double Circle::getRadius() {
    return radius;
}
void Circle::setRadius(double radius) {
   this->radius = radius; 
}
double Circle::getArea() {
    return M_PI * (radius * radius);
}
double Circle::circumference() {

    return 2 * M_PI * radius;
}