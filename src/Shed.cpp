#include "../header/Shed.h"
#include <iostream>
using namespace std;

Shed::Shed() {
    this->purpose = "bike maintenance";
    this->material = "pine";
    this->color = "green";
}
Shed::~Shed() {
    cout << "the original shed for " << purpose << " is gone now" << endl;
}
void Shed::setColor(string color) {
    this -> color = color;
}
void Shed::setPurpose(string purpose) {
    this -> purpose = purpose;
}
void Shed::setMaterial(string material) {
    this -> material = material;
}
string Shed::getColor() {
    return color;
}
void Shed::getPurpose() {
    cout << "this shed will mostly be used for " << purpose << endl;
}