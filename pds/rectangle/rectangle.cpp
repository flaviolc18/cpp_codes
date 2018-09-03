#include "rectangle.h"

Rectangle::Rectangle(){
  _height = 1;
  _width = 1;
  calc();
}

Rectangle::Rectangle(float height, float width){
  if(width <= 0 || width >= 20 || height <= 0 || height >= 20)
    throw invalid_argument("The width and height must be between 0.0 and 20.0");

  _height = height;
  _width = width;
  calc();
}

void Rectangle::calc(){
  _perimeter = 2*_width + 2*_height;
  _area = _width * _height;
}

float Rectangle::get_height(){
  return _height;
}
void Rectangle::set_height(float height){
  if(height <= 0 || height >= 20)
    throw invalid_argument("The height must be between 0.0 and 20.0");
  
  _height = height;
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