#include <iostream>
using namespace std;

void print_tab(int *tab, int size){
    for(int i = 0; i < size; i++)
    {
        std::cout<<*tab++<<", ";
    }
    std::cout<<"\n";
}

int main(){
    int tab[11];
    int *start = tab;
    int *end = &tab[10];
    int *init = tab;
    int size = sizeof(tab)/sizeof(int);
    int x = 0;
    while (init <= end)
    {
        *init = x;
        init++;
        x++;
    }
    std::cout<<"NOT REVERSED: \n";
    print_tab(tab, size);

    while (end > start) {
        int tmp = *end;
        *end = *start;
        *start = tmp;
        end--;
        start++;
    }
    std::cout<<"REVERSED: \n";
    print_tab(tab, size);
}
