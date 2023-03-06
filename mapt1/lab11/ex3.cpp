#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void display_value(double);
    void display_value(Vector);
    size_t dimension_;
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
    cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << "\n Creating a new Vector class object in R2 space :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << "\n Creating a new Vector class object in R3 space :" <<endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void Vector::display_value(double var)
{
    std::cout<< "value of single variable of type double: "<< var << "\n";
}

void Vector::display_value(Vector vec)
{
    std::cout<< "values of vector of R"<<vec.dimension_<< ":\n";
    for(size_t i = 0; i < vec.dimension_; i++)
    {
        std::cout << vec.data_[i] << " ";
    }
    std::cout<< "\n"; 
}

int main()
{
    double var = 3.14;
    Vector r1(1.0); // R1
    r1.display_value(var);
    r1.display_value(r1);
    Vector r2(1.0, 2.0); // R2
    r2.display_value(r2);
    Vector r3(1.0, 2.0, 3.0); // R3
    r3.display_value(r3);
}