
## ex 1:
```cpp
#include <iostream>

int main() {

    int a=32540;
    short b=a;
    std::cout << "b= " << b <<std::endl;

    float f=1.9;
    int x=f; //implicit casting
    std::cout<< "f: " << f << std::endl;
    std::cout<< "x: " << x << std::endl;
    
    int xx = 2;
    float ff = xx;
    std::cout<< "ff: " << ff << std::endl;
    std::cout<< "xx: " << xx << std::endl;
    

    int c=1; //  unsigned without sing bit extends the range
    unsigned int d=c;
    std::cout<<"explicit casting"<<std::endl;
    b=(short)a;     //explicit casting
    std::cout<<"b= "<<b<<std::endl;
    b=short(a);     //explicit casting
    std::cout<<"b= "<<b<<std::endl;
    b=static_cast<short>(a);    //explicit casting
    std::cout<<"b= "<<b<<std::endl;
    
    /*
	1.1:
	in this case changing from implicit casing to explicit doesn't chagne the answer

    1.2:
        maximum size of short is 32540 so any int greatter than that value variable will lose information        
    1.3:
        implicit casting from float to int will lose anything after decimal point        
    1.4:
        in that case we won't lose nor gain any information
    */   
}
```

```
output:
	b= 32540
	f: 1.9
	x: 1
	ff: 2
	xx: 2
	explicit casting
	b= 32540        
	b= 32540        
	b= 32540
```

## ex 2:

```cpp
#include <iostream>
#include <vector>

void dectobin(int x)
{
    std::vector<int> bin_output;  
    int max_val = 0;
    for(int i = 1; i <= x; i*=2)
        max_val = i*2;
    //std::cout<< max_val <<std::endl;
    for(int i = max_val; i >= 1; i/=2)
    {
    //    std::cout<< max_val << ' ' << i << std::endl;
        if(x >= i)
        {
            bin_output.push_back(1);
            x-=i;
        }
        else
            bin_output.push_back(0);
        
    }
    for(int i = 0;i<bin_output.size();i++)
        std::cout<<bin_output[i];
    std::cout << std::endl;
}

int main() {
    int a = 128;
    std:: cout << "a= " << a <<std::endl; 
    a = a >> 1;
    std:: cout << "a= " << a <<std::endl; 
    int b1, b2, b3, b4;
    b1 = a >> 1;
    std::cout<<"b1: "<< b1<< std::endl;
    b2 = a >> 2;
    std::cout<<"b2: "<< b2<< std::endl;
    b3 = a >> 3;
    std::cout<<"b3: "<< b3<< std::endl;
    b4 = a >> 4;
    std::cout<<"b4: "<< b4<< std::endl;
    
    int c = 128;
    int d = 2;
    int e = 64;
    dectobin(c);
    std::cout<<"2.2:"<< std::endl;
    int cd = c | d;
    dectobin(cd);
    std::cout<<"2.3:"<<std::endl;
    int ce = c | e;   
    dectobin(ce);
}
/*
    1.1:
        shifting number bitwize right divides number by 2 and shifting left mulitply the number by 2 
*/
```

```
output:
	a= 128
	a= 64
	b1: 32
	b2: 16
	b3: 8
	b4: 4
	010000000
	2.2:
	010000010
	2.3:
	011000000
```
## ex 3:
### ex 3.1:
```cpp
#include <iostream>

int main() {
    int b = 1;
    b = 2;
    //int b = 2;
    std::cout << "b=" << b << std::endl;
    {
        b = 3;
        //int b = 4;
        std::cout << "b=" << b << std::endl;
    }
    std::cout << "b=" << b << std::endl;
}
```

```
output:
	b=2
	b=3
	b=3
```

### ex 3.2:
```cpp
#include <iostream>

int main() {
    int b = 1;
    b = 2;
    int b = 2;
    std::cout << "b=" << b << std::endl;
    {
        b = 3;
        //int b = 4;
        std::cout << "b=" << b << std::endl;
    }
    std::cout << "b=" << b << std::endl;
}
```

```
output:
	3.cpp: In function `int main()':
	3.cpp:6: redeclaration of `int b'        
	3.cpp:4: `int b' previously declared here
	b=2
	b=3
	b=3
```

In this case compiler outputs warning about redeclaration of variable but because it wasn't for example `const int` that wasn't serious issue

### ex 3.3:
```cpp
#include <iostream>

int main() {
    int b = 1;
    b = 2;
    //int b = 2;
    std::cout << "b=" << b << std::endl;
    {
        b = 3;
        int b = 4;
        std::cout << "b=" << b << std::endl;
    }
    std::cout << "b=" << b << std::endl;
}
```

```
output:
	b=2
	b=4
	b=3
```

in `c++` we can declare variables at different levels of a program. Variable declared on any level are accessible only on that level or lower. In case of `ex 3.3` variable `b` is redeclared on line 10 inside curly brackets and is accessible only inside those curly brackets, on line 13 program prints out variable `b` it is using variable declared earlier on line 4.