#ifndef SHED_H
#define SHED_H

#include <string>
using namespace std;

class Shed {
    public:
      Shed();
      ~Shed();
      void setColor(string color);
      void setMaterial(string material);
      void setPurpose(string purpose);
      string getColor();
      void getPurpose();

    private:
      string color;
      string material;
      string purpose;
};

#endif