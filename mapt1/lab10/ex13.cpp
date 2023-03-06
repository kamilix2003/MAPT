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