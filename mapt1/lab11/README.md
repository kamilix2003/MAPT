# lab11
[source code](https://gitlab.com/kachi_hi/maptlabs)
## ex 1: 
```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    size_t dimension_;
private:
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
    cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << "\n Creating a new Vector class object in R2 space :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << "\n Creating a new Vector class object in R3 space :" <<endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}


int main()
{
    Vector r1(1.0); // R1
    cout << "Vector class object with the number of dimensions:" << r1.dimension_  << endl;
    Vector r2(1.0, 1.0); // R2
    cout << "Vector class object with the number of dimensions:" << r2.dimension_  << endl;
    Vector r3(1.0, 1.0, 1.0); // R3
    cout << "Vector class object with the number of dimensions:" << r3.dimension_  << endl;
}

```
```
output:

 Creating a new Vector class object in R1 space :
Vector class object with the number of dimensions:1

 Creating a new Vector class object in R2 space :
Vector class object with the number of dimensions:2

 Creating a new Vector class object in R3 space :
Vector class object with the number of dimensions:3
```

## ex 2:
```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    size_t dimension_;
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
    cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << "\n Creating a new Vector class object in R2 space :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << "\n Creating a new Vector class object in R3 space :" <<endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void display_value(double var)
{
    std::cout<< "value of single variable of type double: "<< var << "\n";
}

void display_value(Vector vec)
{
    std::cout<< "values of vector of R"<<vec.dimension_<< ":\n";
    for(size_t i = 0; i < vec.dimension_; i++)
    {
        std::cout << vec.data_[i] << " ";
    }
    std::cout<< "\n";
}


int main()
{
    double var = 3.14;
    display_value(var);
    Vector r1(1.0); // R1
    display_value(r1);
    Vector r2(1.0, 2.0); // R2
    display_value(r2);
    Vector r3(1.0, 2.0, 3.0); // R3
    display_value(r3);

}
```
```
output:
value of single variable of type double: 3.14

 Creating a new Vector class object in R1 space :
values of vector of R1:
1 

 Creating a new Vector class object in R2 space :
values of vector of R2:
1 2 

 Creating a new Vector class object in R3 space :
values of vector of R3:
1 2 3 
```
## ex 3:
```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void display_value(double);
    void display_value(Vector);
    size_t dimension_;
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
    cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
    cout << "\n Creating a new Vector class object in R2 space :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
    cout << "\n Creating a new Vector class object in R3 space :" <<endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void Vector::display_value(double var)
{
    std::cout<< "value of single variable of type double: "<< var << "\n";
}

void Vector::display_value(Vector vec)
{
    std::cout<< "values of vector of R"<<vec.dimension_<< ":\n";
    for(size_t i = 0; i < vec.dimension_; i++)
    {
        std::cout << vec.data_[i] << " ";
    }
    std::cout<< "\n"; 
}

int main()
{
    double var = 3.14;
    Vector r1(1.0); // R1
    r1.display_value(var);
    r1.display_value(r1);
    Vector r2(1.0, 2.0); // R2
    r2.display_value(r2);
    Vector r3(1.0, 2.0, 3.0); // R3
    r3.display_value(r3);
}
```
```
output:
 Creating a new Vector class object in R1 space :
value of single variable of type double: 3.14
values of vector of R1:
1 

 Creating a new Vector class object in R2 space :
values of vector of R2:
1 2 

 Creating a new Vector class object in R3 space :
values of vector of R3:
1 2 3 
```

## ex 4:
```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void display_value(double);
    void display_value(Vector);
    Vector add(Vector, Vector);
    size_t dimension_;
    double data_[3] = {0,0,0};
};

Vector::Vector(double element1)
{
   // cout << "\n Creating a new Vector class object in R1 space :" <<endl;
    dimension_ = 1;
    data_[0] = element1;
}

Vector::Vector(double element1, double element2)
{
  //  cout << "\n Creating a new Vector class object in R2 space :" <<endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}

Vector::Vector(double element1, double element2, double element3)
{
   // cout << "\n Creating a new Vector class object in R3 space :" <<endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}

void Vector::display_value(double var)
{
    std::cout<< "value of single variable of type double: "<< var << "\n";
}

void Vector::display_value(Vector vec)
{
    std::cout<< "values of vector of R"<<vec.dimension_<< ":\n";
    for(size_t i = 0; i < vec.dimension_; i++)
    {
        std::cout << vec.data_[i] << " ";
    }
    std::cout<< "\n"; 
}

Vector Vector::add(Vector vec1, Vector vec2)
{
    if(vec1.dimension_ != vec2.dimension_)
        {
            std::cout<< "vectors are in diffrent dimensions\n";
            return 0;
        }
    
        if(vec1.dimension_ == 1)
        {
        Vector vecc1(vec1.data_[0]+vec2.data_[0]);    
        return vecc1;
        }
        else if(vec1.dimension_ == 2)
        {
        Vector vecc2(vec1.data_[0]+vec2.data_[0], vec1.data_[1]+vec2.data_[1]);    
        return vecc2;
        }
        else
        {
        Vector vecc3(vec1.data_[0]+vec2.data_[0], vec1.data_[1]+vec2.data_[1], vec1.data_[2]+vec2.data_[2]);    
        return vecc3;
        }
};

int main()
{
    double var = 3.14;
    Vector r1(1.0); // R1
    Vector r2(1.0, 2.0); // R2
    Vector r12 (0, 0);
    r12 = r1.add(r1, r2);

    Vector r3(1.0, 2.0, 3.0); // R3
    Vector r4(3.0, 2.0, 1.0); // R3
    Vector r5(0, 0, 0);
    r5 = r3.add(r3, r4);
    r5.display_value(r5);
}
```
```
output:
vectors are in diffrent dimensions
values of vector of R3:
4 4 4 
```