#include <iostream>
using namespace std;

int main() {
    string adjectiveOne, adjectiveTwo, girlsName, occupationOne, placeName, clothing, hobby, adjectiveThree, occupationTwo, boysName, mansName;

    cout << "Please enter an adjective \n" << endl;
    getline(cin, adjectiveOne);
    cout << "Please give a girl's name" << endl;
    getline(cin, girlsName);
    cout << "Please give another adjective" << endl;
    getline(cin, adjectiveTwo);
    cout << "Please give an occupation" << endl;
    getline(cin, occupationOne);
    cout << "What about a place name?" << endl;
    getline(cin, placeName);
    cout << "What's your favorite piece of clothing?" << endl;
    getline(cin, clothing);
    cout << "What's your favorite hobby?" << endl;
    getline(cin, hobby);
    cout << "give me a third adjective" << endl;
    getline(cin, adjectiveThree);
    cout << "give me another occupation" << endl;
    getline(cin, occupationTwo);
    cout << "what's a boy's name?" << endl;
    getline(cin, boysName);
    cout << "what's a man's name?" << endl;
    getline(cin, mansName);
    cout << "There once was a " << adjectiveOne << " girl named " << girlsName << " who was a " << adjectiveTwo << " " << occupationOne << " in the kingdom of " << placeName << ". She loved to wear " << clothing << " and " << hobby << ". She wanted to marry the " << adjectiveThree << " " << occupationTwo << " named " << boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;

    return 0;
}