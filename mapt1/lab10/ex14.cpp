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