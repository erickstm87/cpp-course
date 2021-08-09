#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cmath>
#include "../header/House.h"

using namespace std;


int main() {
    House myHouse;
    myHouse.setColor("green");
    myHouse.setNumStories(10);
    myHouse.printHouseData();
    
    return 0;
}

