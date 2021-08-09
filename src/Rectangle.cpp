#include "../header/Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    width = 2;
    height = 4;
    cout << "default of rectangle has a width of " << width << " and a height of " << height << endl;
}
void Rectangle::setWidth(int width) {
    this->width = width;
}
void Rectangle::setHeight(int height) {
    this->height = height;
}
int Rectangle::getPerimeter() {
    return 2*(width+height);
}