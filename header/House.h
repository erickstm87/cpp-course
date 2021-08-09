#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
    public: 
      House();
      ~House();
      void setColor(string color);
      void setNumStories(int numStories);
      string getColor() const;
      int getNumStories() const;
      void printHouseData() const;

    private:
      int numStories;
      string color;
      bool sod;
      string grown;
};

#endif