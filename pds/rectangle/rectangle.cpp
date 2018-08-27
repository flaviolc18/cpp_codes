#include "rectangle.h"

Rectangle::Rectangle(){
  _length = 1;
  _width = 1;
  calc();
}

Rectangle::Rectangle(float length, float width){
  if(width <= 0 || width >= 20 || length <= 0 || length >= 20)
    throw invalid_argument("The width and length must be between 0.0 and 20.0");

  _length = length;
  _width = width;
  calc();
}

void Rectangle::calc(){
  _perimeter = 2*_width + 2*_length;
  _area = _width * _length;
}

float Rectangle::get_length(){
  return _length;
}
void Rectangle::set_length(float length){
  if(length <= 0 || length >= 20)
    throw invalid_argument("The length must be between 0.0 and 20.0");
  
  _length = length;
  calc();
}

float Rectangle::get_width(){
  return _width;
}
void Rectangle::set_width(float width){
  if(width <= 0 || width >= 20)
    throw invalid_argument("The width must be between 0.0 and 20.0");
  
  _width = width;
  calc();
}

float Rectangle::get_perimeter(){
  return _perimeter;
}
float Rectangle::get_area(){
  return _area;
}