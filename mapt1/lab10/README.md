# lab10
[source code](https://gitlab.com/kachi_hi/maptlabs)
## ex 1.1:
```cpp
#include <iostream>

class Circle {
    public:
        float radius_;
};

int main()
{
    Circle cir1;
    Circle cir2;
    int rad1 = 12, rad2 = 4;
    cir1.radius_ = rad1;
    cir2.radius_ = rad2;

    std::cout<< cir1.radius_ << " " << cir2.radius_ << "\n";
}
```
```
output:
12 4
```
## ex 1.2:
```cpp
#include <iostream>

class Circle {
    public:
        float radius_;
        Circle(float radius)
        {
            radius_ = radius;
        };
        Circle()
        {
            radius_ = 0;
        }
};

int main()
{
    Circle cir1;
    Circle cir2;
    float rad1 = 12, rad2 = 4, rad3 = 3.14;
    cir1.radius_ = rad1;
    cir2.radius_ = rad2;

    Circle cir3(rad3);

    std::cout<<cir1.radius_<< ' ' 
    << cir2.radius_ << " " 
    <<cir3.radius_<<std::endl;
}
```
```
output:
12 4 3.14
```
## ex 1.3:
```cpp
#include <iostream>

class Circle {
    public:
        float* radius_;
        Circle(float radius)
        {
            radius_ = &radius;
        };
        Circle()
        {
            radius_ = 0;
        };
        ~Circle()
        {
            // delete radius_;
            std::cout<<"\nCircle destructed\n";
        };
};

int main()
{
    Circle cir1;
    Circle cir2;
    float radius1 = 3.14, radius2 = 2.71;
    float* p_radius1 = &radius1;
    float* p_radius2 = &radius2;
    cir1.radius_ = p_radius1;
    cir2.radius_ = p_radius2;

    std::cout << *cir1.radius_ << " " << *cir2.radius_ << "\n";

    // std::cout << *cir1.radius_ << " " << *cir2.radius_ << "\n";

}
```
```
output:
3.14 2.71

Circle destructed

Circle destructed
```
## ex 1.4:
```cpp
#include <iostream>

#define PI 3.14

class Circle {
    public:
        float radius_;
        float area();
        float circumference();
};
float Circle::circumference()
{   
    return radius_ * 2 * PI;
};
float Circle::area()
{
    return radius_ * radius_ * PI;
}

int main() 
{
    Circle my_circle;
    my_circle.radius_ = 3;

    std::cout<< "radius: " << my_circle.radius_<< "\narea: " << my_circle.area() << "\ncircumference: " << my_circle.circumference() << "\n";
}
```
```
output:
radius: 3
area: 28.26
circumference: 18.84
```
## ex 1.5:
```cpp
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
```
## ex 1.6:
```cpp
// ex16.cpp
#include <iostream>
#include "ex1_6_methods_correct.h"
int main() 
{
    Circle my_circle(2.71);
    std::cout<< "before: " << my_circle.read_radius() << "\n";
    my_circle.set_radius(3.14); 
    std::cout<< "after: " << my_circle.read_radius() << "\n";

}
```
```cpp
// ex1_6_methods_correct.h
class Circle{
private:
  float radius_;
  float area_;
  float circumference_;

public:
  Circle(float);
  void set_radius(float);
  float read_radius();
};
```
```cpp
// ex1_6_methods_correct.cc
#include "ex1_6_methods_correct.h"
Circle::Circle(float radius): radius_(radius) {};

void Circle::set_radius(float radius) {radius_ = radius;};

float Circle::read_radius() {return radius_;};
```
```
output:
before: 2.71
after: 3.14
```