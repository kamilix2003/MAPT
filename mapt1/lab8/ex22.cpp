#include <iostream>

struct st
{
    int number;
    std::string name;
};

int main()
{
    st one, two;
    st *p = &one;

    p->name = "hello";
    p->number = 12;

    two.name = "world";
    two.number = 21;

    std::cout<< one.name << ' ' << one.number << "\n";
    std::cout<< two.name << ' ' << two.number << "\n";

}