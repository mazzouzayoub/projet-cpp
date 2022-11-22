#include <iostream>

using namespace std;

class Shape
{
protected:
  float x, y;
public:
  Shape(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
};

class Rectangle: public Shape
{
public:
  Rectangle(float _x, float _y) : Shape(_x, _y) {}

  float area()
  {
    return (x * y);
  }
};

class Triangle: public Shape
{
public:
  Triangle(float _x, float _y) : Shape(_x, _y) {}

  float area()
  {
    return (x * y / 2);
  }
};

int main (){

  Rectangle rectangle(4,7);
  Triangle triangle(4,7);
  cout << rectangle.area() << endl;   
  cout << triangle.area() << endl;    
  return 0;
}