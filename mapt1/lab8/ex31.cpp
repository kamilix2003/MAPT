#include <iostream>
using namespace std;

int g_tab[] = {4, 3, 2, 1, 0};

int main(){
    int tab[] = {4, 3, 2, 1, 0};
    int *p = tab;
    int *g_p = g_tab;
    int size = sizeof(tab)/sizeof(int);
    std::cout<<"LOCAL SCOPE: \n";
    while(p < &tab[size])
    {
        std::cout<< p << ": " <<*p<<"\n";
        p++;
    }
    std::cout<<"GLOBAL SCOPE: \n";
    while(g_p < &g_tab[size])
    {
        std::cout<< g_p << ": " <<*g_p<<"\n";
        g_p++;
    }
}
