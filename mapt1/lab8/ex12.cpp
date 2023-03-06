#include <iostream>
#include <vector>
#include <iomanip>


double function(double x)
{
    return x*x + 1;
}


int main()
{
    double step = 0.1;
    size_t size = 100;
    double *arg_array = new double[size];
    double *val_array = new double[size];
    int steps = 0;
    for(double i = -3; i < 3+step; i+=step)
    {
        *arg_array = i;
        *val_array = function(*arg_array);
        arg_array++;
        val_array++;
        steps++;
        size <= step+5 ? size+=10 : 0;
    }
    for(int i = -steps ; i < 0; i++)
    {
        std::cout<<arg_array[i]<<": "<<val_array[i]<<std::endl;
    }

}
