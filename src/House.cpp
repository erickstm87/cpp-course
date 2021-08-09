#include "../header/House.h"
#include <iostream>
using namespace std;

House::House() {
    this->numStories = 1;
    this->color = "red";
}
House::~House() {
    cout << "the " << color << " house with " << numStories << " is gone now." << endl;
}
void House::setColor(string color) {
  this -> color = color;
}
void House::setNumStories(int numStories) {
  this -> numStories = numStories;
}
string House::getColor() const {
  return color;
}
int House::getNumStories() const {
  return numStories;
}
void House::printHouseData() const {
    cout << "here is data about the house. It's color is: " << color << " and the number of stories is " << numStories << endl; 
}