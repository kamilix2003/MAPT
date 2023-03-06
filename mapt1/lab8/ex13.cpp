#include <iostream>

struct st
{
    int number;
    std::string name;
};

int main(){
    st tab[10];
    st *p = tab;
    for(int i = 0; i < 10; i++)
    {
        p = new st;
        p->name = "blank";
        p->number = i;
        tab[i] = *p;
        p++;
    }
    for(int i = 0; i < 10; i++)
    {
        std::cout<<tab[i].name<< " " << tab[i].number <<"\n";
    }
}