#include <iostream>

struct test
{
    int var1;
    int var2;
};

void setToZero(test *tab, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        tab[i].var1 = 0;
        tab[i].var2 = 0;
    }
}

int main()
{
    test tab1[1000];
    setToZero(tab1, 1000);
}
