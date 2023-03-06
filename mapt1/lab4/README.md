## ex 1 && 2
### ex 2.2:

```cpp
#include <iostream>

int main() {
    short a;

    std:: cout << "Size of a is equal "<< sizeof(a) <<"B"<<std::endl;
  
    for(int i = 1; i <= 32; i*=2)
    {
        std:: cout << "Size of a is equal "<< sizeof(a+i) <<"B"<<std::endl; 
    }  
}
```

```
output:
	Size of a is equal 2B
	Size of a is equal 4B
	Size of a is equal 4B
	Size of a is equal 4B
	Size of a is equal 4B
	Size of a is equal 4B
	Size of a is equal 4B
```

### ex 2.3:

```cpp
#include <iostream>

int main() {
    unsigned int b;
    std:: cout << "Size of b is equal "<< sizeof(b+4294967295/2) <<"B"<<std::endl;  
    for(int i = 1; i <= 32; i*=2)
    {
        std:: cout << "Size of b is equal "<< sizeof(b+i) <<"B"<<std::endl; 
    }      
}
```

```
output:
	Size of b is equal 4B
	Size of b is equal 4B
	Size of b is equal 4B
	Size of b is equal 4B
	Size of b is equal 4B
	Size of b is equal 4B
	Size of b is equal 4B
```

```cpp
#include <iostream>

int main() {
    short a;
    int b;
    long c;
    char d;
    long long cc;

    std::cout<< "size of char:" << sizeof(d) <<"B"<< std::endl;
    std::cout<< "size of short:" << sizeof(a) <<"B"<< std::endl;
    std::cout<< "size of short + 1:" << sizeof(a+1) <<"B"<<std::endl;
    std::cout<< "size of int:" << sizeof(b) <<"B"<< std::endl;
    std::cout<< "size of long:" << sizeof(c) <<"B"<< std::endl;
    std::cout<< "size of long long:" << sizeof(cc) <<"B"<< std::endl;
}
```

```
output:
	size of char:1B
	size of short:2B
	size of short + 1:4B
	size of int:4B
	size of long:4B
	size of long long:8B
```

## ex 3

### ex 3.1:

```cpp
#include <iostream>
void inrange(int x)
{
    if(x>=-7 && x < 11)
        {
        std::cout<<"number "<< x <<" is in <-7,11)"<<std::endl;
        return;
        }
    std::cout<<"number "<< x <<" is not in <-7,11)"<<std::endl;
}
int main() 
{
    int test_values[5]  = {0, 13, -9, -7, 11};
    int b = 3;
    std::cout << "b=" << b << std::endl;

    if (b>=-7 && b<11) 
    {
        b = 5;
        std::cout << "b=" << b << std::endl;
    }
    
    std::cout << "b=" << b << std::endl;
    
    for(int i = 0; i < 5; i++)
    {
        inrange(test_values[i]);
    }
}
```

```
output:
	b=3
	b=5
	b=5
	number 0 is in <-7,11)
	number 13 is not in <-7,11)
	number -9 is not in <-7,11)
	number -7 is in <-7,11)
	number 11 is not in <-7,11)
```

### ex 3.2:

```cpp
#include <iostream>
void inrange(int x)
{
    if(x<-7)
        {
        std::cout<<"number "<< x <<" is not in <-7,11)"<<std::endl;
        return;
        }
    else if(x>=11)
        {
        std::cout<<"number1 "<< x <<" is not in <-7,11)"<<std::endl;
        return;
        }
    std::cout<<"number "<< x <<" is in <-7,11)"<<std::endl;
}
int main() {
    int test_values[5]  = {0, 13, -9, -7, 11};
    int b = 3;
    std::cout << "b=" << b << std::endl;
    if(b>=7)
        {
            b = 5;
            std::cout<< "b=" << b << std::endl;
        }
    else if(b<11)
        {
            b = 5;
            std::cout<< "b=" << b << std::endl;
        }
    std::cout << "b=" << b << std::endl;
        for(int i = 0; i < 5; i++)
    {
        inrange(test_values[i]);
    }
}
```

```
output:
	b=3
	b=5
	b=5
	number 0 is in <-7,11)
	number1 13 is not in <-7,11)
	number -9 is not in <-7,11)
	number -7 is in <-7,11)
	number1 11 is not in <-7,11)
```

### ex 3.3:
```cpp
#include <iostream>

int main() {
    int x = 2;
    int result;
    if (x > 1) {
        //int result = x * 2; 
        //variable is accessible only inside the container it was initilized in
        result = x * 2;
    }

    std::cout << result;
}
```

```
output:
	4
```

```
output before correcting the mistake:
	4.cpp: In function `int main()':
	4.cpp:11: `result' undeclared (first use this function)
	4.cpp:11: (Each undeclared identifier is reported only once
	4.cpp:11: for each function it appears in.)
	4
```

### ex 3.4:

#### ex 3.4.1:
example program
```cpp
#include <iostream>

int main() {
    char c = '0';

    switch (c) {
    case '0':
        std::cout << "0\n";
        std::cout << "zero\n";
        break;
    case 50:
        std::cout << "two\n";
        break;
    case 'd':
        break;
    case 'e':
    case 'f': {
        std::cout <<"e-f\n";
        break;
    }
    default:
        std::cout << "other\n";
    }
}
```

#### ex 3.4.2:
Line 4 in code assigns value `0` as a character(a number corresponding to character in asci) to variable `c` 

#### ex 3.4.3
```cpp
#include <iostream>
void swth(char c)
{
        switch (c) {
    case '0':
        std::cout << "0\n";
        std::cout << "zero\n";
        break;
    case 50:
        std::cout << "two\n";
        break;
    case 'd':
        break;
    case 'e':
    case 'f': {
        std::cout <<"e-f\n";
        break;
    }
    default:
        std::cout << "other\n";
    }
}
int main() {
    char c = '0';
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
    c = 50;
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
    c = 'd';
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
    c = 'e';
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
    c = 'f';
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
    c = 'z';
    std::cout<<"c = "<<c<<std::endl;
    swth(c);
}
```

```
output:
	c = 0
	0
	zero
	c = 2
	two
	c = d
	c = e
	e-f
	c = f
	e-f
	c = z
	other
```
#### 3.4.4:
Condition in line 11 mean that variable `c` has to be equal to character corresponding to code `50` in ASCI
#### 3.4.5:
The difference between line `14`, `16` and `17` is the value that variable `c` has to be equal to to execute the block inside that case