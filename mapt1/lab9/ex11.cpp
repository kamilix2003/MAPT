#include<iostream>

float thebiggestfloat(float f1, float f2, float f3)
{
    if(f1 >= f2 && f1 >=f3)
        return f1;
    if(f2 >= f1 && f2 >=f3)
        return f2;
    return f3;
}

int main()
{
    float f[3][3] = {
        {1.0, 3.3, 0.3},
        {0.2, 9.99, 0.0},
        {123.11, 231.0, 0.9999}
    };
    for(int i = 0; i < 3; i++)
    {
        std::cout<<thebiggestfloat(f[i][0], f[i][1],f[i][2])<<std::endl;
    }
}