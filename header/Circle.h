#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Circle {
    public:
      Circle(double radius);
      double getRadius();
      void setRadius(double radius);
      double getArea();
      double circumference();

    private:
      double radius;
};

#endif