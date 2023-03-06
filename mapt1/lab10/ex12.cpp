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