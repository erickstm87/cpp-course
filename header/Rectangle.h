#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
    public:
      Rectangle();
      void setWidth(int width);
      void setHeight(int setHeight);
      int getPerimeter();

    private:
      int width;
      int height;
};

#endif