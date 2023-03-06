#include <iostream>
#include "ex1_6_methods_correct.h"
int main() 
{
    Circle my_circle(2.71);
    std::cout<< "before: " << my_circle.read_radius() << "\n";
    my_circle.set_radius(3.14); 
    std::cout<< "after: " << my_circle.read_radius() << "\n";

}