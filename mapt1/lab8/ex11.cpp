#include <iostream>

int main()
{
    const int n = 5;
    int table[n+1];
    for(int i = 0; i < n+1; i++)
    {
        table[i]=i;
    }
    for(int i = 0; i < n+1; i++)
    {
        std::cout<< "index: " << i << " value: " << table[i] << std::endl;
    }
}