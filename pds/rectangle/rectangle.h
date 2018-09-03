#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

#include <iostream>

using namespace std;

 class Rectangle{
   private:
    float _height;
    float _width;
    float _perimeter;
    float _area;

    void calc();

  public:
    Rectangle();
    Rectangle(float height, float width);

    float get_height();
    void set_height(float height);
    float get_width();
    void set_width(float width);
    float get_perimeter();
    float get_area();

 };

#endif