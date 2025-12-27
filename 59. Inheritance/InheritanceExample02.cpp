#include <iostream>

class Shape
{
public:
  double area;
  double volume;
};

class Cube : public Shape
{
public:
  double side;

  Cube(double side)
  {
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
  }
};

class Sphere : public Shape
{
public:
  double radius;
  Sphere(double radius)
  {
    this->radius = radius;
    this->area = 4 * 3.14159 * (radius * radius);
    this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
  }
};

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  Cube cube(10);
  Sphere sphere(10);

  cout << "Area of cube: " << cube.area << " cm^2\n";
  cout << "Volume of cube: " << cube.volume << " cm^3\n";

  cout << "Area of sphere: " << sphere.area << " cm^2\n";
  cout << "Volume of sphere: " << sphere.volume << " cm^3\n";

  return 0;
}