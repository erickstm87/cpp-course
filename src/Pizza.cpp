#include "../header/Pizza.h"
#include <iostream>
#include <vector>
using namespace std;

Pizza::Pizza(string name, int cost, int diameter) {
    this->name = name;
    this->cost = cost;
    this->diameter = diameter;
}
void Pizza::addTopping(string topping) {
    this->toppings.push_back(topping);
}
int Pizza::getCost() {
    return this->cost;
}
void Pizza::printToppings() {
    vector<string> myToppings = this->toppings;
    cout << "your pizza has: " << endl;
    for(int i = 0; i < myToppings.size(); i++) {
        cout << myToppings[i] << endl;
    }
}