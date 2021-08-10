#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cmath>
#include "../header/House.h"
#include "../header/Shed.h"
#include "../header/Rectangle.h"
#include "../header/Book.h"
#include "../header/BankAccount.h"
#include "../header/Pizza.h"
#include "../header/Circle.h"

using namespace std;

void printBookDetails(const Book& book); 
int main() {
    // House myHouse;
    // myHouse.setColor("green");
    // myHouse.setNumStories(10);
    // myHouse.printHouseData();

    // Shed myShed;
    // myShed.setColor("red");
    // myShed.setPurpose("car work");
    // myShed.setMaterial("granite");
    // myShed.getPurpose();

    // Rectangle aRectangle;
    // aRectangle.setWidth(20);
    // aRectangle.setHeight(2);
    // cout << "your rectangle has a perimiter of: " << aRectangle.getPerimeter() << endl;
    // Book harukiBook("Haruki", "Killing Commendatore", "Literature", 600);
    // Book snakeBook("Unknown", "The Snakehead", "Non Fiction",400);
    // Book sayBook("Bostonian", "Say Nothing", "Non Fiction recent history", 500);

    // harukiBook.printBookDetails();
    // sayBook.printBookDetails();

    // BankAccount myBankAccount("tom myself", 10);
    // BankAccount richPerson("musk", 10000000);

    // richPerson.deposit(0);
    // cout << "here is your new balance: " << richPerson.getBalance() << endl;
    // poorPerson.withdraw(200);

    // Pizza myPizza("custom", 20, 16);
    // myPizza.getCost();
    // myPizza.addTopping("jalapeno");
    // myPizza.addTopping("bacon");
    // myPizza.addTopping("pineapple");
    // myPizza.printToppings();
    // cout << "the pizza costs $" << myPizza.getCost() << " dollars" << endl;
    
    Circle myCircle(3);
    myCircle.setRadius(3);
    cout << "the radius of the circle is: " << myCircle.getRadius() << endl;
    cout << "the area of the circle is: " << myCircle.getArea() << endl;
    return 0;
 

}