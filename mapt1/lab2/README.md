## ex 1

```cpp 
#include <iostream>

int main()
{
    std::cout<<"Hello World \n\ngoodbye world";
}
```

```
output:
Hello World 

goodbye world
```

## ex 2
### ex 2.1
```cpp
#include <iostream>

int main() {
int a = 1;
int b = 2;

int c = 2*(a+b);
b = 4+3;

std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}

//yes we can change the value of initialized varable 
```

```
output:
b =7
c =6
```


### ex 2.2
```cpp
#include <iostream>

int main() {
int A = 1;
int b = 2;

int c = 2*(a+b);
b = 4+3;

std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}

// c++ is case sensitive language
// A != a in c++
```

```
output:
main.cpp: In function ‘int main()’:
main.cpp:7:12: error: ‘a’ was not declared in this scope
    7 | int c = 2*(a+b);
      |
```

### ex 2.3
#### ex 2.3.1
```cpp
#include <iostream>

int main() {
int 1a = 1;
int b = 0;

int c = 2*(a+b);
b = 4+3;

std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}
// name of varable can not start with a number or can not use keywords of the language
```

```
output:
main.cpp: In function ‘int main()’:
main.cpp:4:5: error: expected unqualified-id before numeric constant
    4 | int 1a = 1;
      |     ^~
main.cpp:7:12: error: ‘a’ was not declared in this scope
    7 | int c = 2*(a+b);
      |
```

#### ex2.3.2
```cpp
#include <iostream>
#include <typeinfo>

int main() {
int a = 1;
int b = 0;

int c = a+b;
c = 5/b;
b = 4+3;

std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}
```

```
output:

```

## ex 3
### ex 3.1
```cpp
#include <iostream>

int main() {
int a = 5;
int b = 5;
int c = 5;
int d;

d= a*(b + c);
//d= a*b + c;

std::cout << "d =" << d << std::endl;
}
```

```
output:
d =50
```

### ex 3.2
```cpp
#include <iostream>

int main() {
int a = 5;
int b = 5;
int c = 5;
int d;

std::cout << "d =" << d << std::endl;

d= a*(b + c);
//d= a*b + c;

std::cout << "d =" << d << std::endl;
}

//in case of onlinegdb compiler output of uninitialized varable is 0 
//but as far as i am concerned some compilers or ides may flag it as a warining
```

```
output:
d =0
d =50
```


## ex 4
### ex 4.1
```cpp
#include <iostream>

int main() {
int a = 1;
int b = 1;
int c = 1;

a = a+1;
//a+= 1;
c = ++b;
// b*=a+1; // b=b*(a+1)

std::cout << "a =" << a << std::endl;
std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}

// a += x == a = a + x
```

```
output:
a =2
b =2
c =2
```

### ex 4.2
``` cpp
#include <iostream>

int main() {
int a = 1;
int b = 1;
int c = 1;

a = a+1;
//a+= 1;
c = ++b;
b*=a+1; // b=b*(a+1)

std::cout << "a =" << a << std::endl;
std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}
```

```
output:
a =2
b =6
c =2
```
### ex 4.3
``` cpp
#include <iostream>

int main() {
int a = 1;
int b = 1;
int c = 1;

a = a+1;
//a+= 1;
c = b++;
//b*=a+1; // b=b*(a+1)

std::cout << "a =" << a << std::endl;
std::cout << "b =" << b << std::endl;
std::cout << "c =" << c << std::endl;
}

// post incrementation applies operation(ex. ++) after finishing line
// pre incremenation applies operation(ex. ++) in the same line
```

```
output:
a =2
b =2
c =1
```
### ex 4.4
``` cpp
#include <iostream>

int main() {
int a = 1;
int b = 1;
int c = 1;


std::cout << "before:\na =" << a << std::endl;
std::cout << "c =" << c << std::endl;

a = a+1;
//a+= 1;

//b*=a+1; // b=b*(a+1)
c = ++a++;

std::cout << "after:\na =" << a << std::endl;
std::cout << "c =" << c << std::endl;
}
```

```
output: 
main.cpp: In function ‘int main()’:
main.cpp:16:8: error: lvalue required as increment operand
   16 | c = ++a++;
      |
```

### ex 4.5
```cpp
#include <iostream>

int main() {
int a = 1;
int b = 1;
int c = 1;


std::cout << "before:\na =" << a << std::endl;
std::cout << "c =" << c << std::endl;

a = a+1;
//a+= 1;
c = b++;
//b*=a+1; // b=b*(a+1)
c = ++(++a);

std::cout << "after:\na =" << a << std::endl;
std::cout << "c =" << c << std::endl;
}
```

```
output:
before:
a =1
c =1
after:
a =4
c =4
```


## ex 5
``` cpp 
#include <iostream>

int main() {
    int a=3;
    int b=0;
    int c=(a<b);
    
    std::cout << c<< std::endl;
    std::cout << (a>b) << std::endl;
    std::cout << (4+2<=2*a) <<std::endl;
    
    bool b1(a==-1);
    bool b2(b==0);
    bool b3(c==20);
    std::cout<< std::endl;
    std::cout<<"a==-1 "<< b1 << std::endl;
    std::cout<<"b==0 "<< b2 << std::endl;
    std::cout<<"c==20 "<< b3 << std::endl;   
}
```

```
output:
0
1
1

a==-1 0
b==0 1
c==20 0
```


## ex 6
``` cpp
#include <iostream>

int main(){
// interval: 0 <=x < 1
int x=0;
bool res1=(x>=0 && x<1);
std::cout<<"input value: ";
std::cin>>x;
std::cout<<(x>=-30 and x<5);
}
```

```
output:
input value: 4
1
```

```
output:
input value: -31
0
```
