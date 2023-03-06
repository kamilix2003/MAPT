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