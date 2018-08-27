#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

#include <iostream>

using namespace std;

 class Rectangle{
   private:
    float _length;
    float _width;
    float _perimeter;
    float _area;

    void calc();

  public:
    Rectangle();
    Rectangle(float length, float width);

    float get_length();
    void set_length(float length);
    float get_width();
    void set_width(float width);
    float get_perimeter();
    float get_area();

 };

#endif