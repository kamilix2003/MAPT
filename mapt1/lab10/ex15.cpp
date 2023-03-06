#include <iostream>
using namespace std;

#define PI 3.14

class Circle{
private:
  float radius_;
  float area_;
  float circumference_;

public:
  Circle(float);
  float area()
  {
    return radius_ * radius_ * PI;
  };
  float circumference()
  {
    return radius_ * 2 * PI;
  };
};

Circle::Circle(float radius): radius_(radius), area_(area()), circumference_(circumference()) {};


int main()
{
    Circle my_circle(3);
}