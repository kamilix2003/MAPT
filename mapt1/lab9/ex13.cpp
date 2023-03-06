#include <iostream>

float clipping(float x)
{
    float min = -25;
    float max = 30;
    if(x > max)
        return max;
    if(x < min)
        return min;
    return x;
}

int main()
{
    double step = 0.10;
    for(double i = -30-step; i < 35.1; i+=step)
    {
        i > -step && i < step ? i = 0: 0;
        std::cout<<clipping(i)<<std::endl;
    }

}