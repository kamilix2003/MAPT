### ex 1.1:
```cpp
#include <iostream>

enum Color{
	RED = 0,
	BLUE = 1,
	GREEN,
    MAGENTA,
    CYAN,
};

int main(){

	Color c = CYAN;

	switch (c) {
		case RED:
			std::cout << "R\n";
			break;
		case BLUE:
			std::cout << "B\n";
			break;
		case GREEN: 
			std::cout << "G\n";
			break;
        case MAGENTA:
            std::cout << "M\n";
            break;
        case CYAN:
            std::cout << "C\n";
            break;
		default:
			std::cout << "UN\n";
	}

	std::cout << "Color: " << c;
}
```

```
output:
C
Color: 4
```

### ex 1.2:
```cpp
#include <iostream>

enum Games{
    LEAGUE_OF_LEGENDS = 0,
    CYBERPUNK_2077 = 10,
    GOTHIC = 7,
    MOUNT_AND_BLADE = 13,
    BORDERLANDS = 23
};

int main(){
    	Games c = CYBERPUNK_2077;

	switch (c) {
		case LEAGUE_OF_LEGENDS:
			std::cout << "LOL\n";
			break;
		case CYBERPUNK_2077:
			std::cout << "CP\n";
			break;
		case GOTHIC: 
			std::cout << "G\n";
			break;
		case MOUNT_AND_BLADE: 
			std::cout << "M&B\n";
			break;
		case BORDERLANDS: 
			std::cout << "B\n";
			break;
		default:
			std::cout << "UN\n";
	}

	std::cout << "Games: " << c;
}

```

```
output:
CP
Games: 10
```

### ex 3.1:
#### ex 3.1.1:
```cpp
#include <iostream>

int main() {

    int counter = 10;

    do {
        std::cout << counter << ", ";
    } while (counter--);

    std::cout << "THE END" << std::endl;
}
```

```
output:
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, THE END
```

#### ex 3.1.4
```cpp
#include <iostream>

int main() {

    int counter = 10;

    do {
        std::cout << counter << ", ";
    } while (counter);

    std::cout << "THE END" << std::endl;
}

```

```
output:
10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, ...
```

when you remove `--` operator while loop will never be able to end

#### ex 3.1.5:
```cpp
#include <iostream>

int main() {

    int counter = 10;

    do {
        std::cout << counter << ", ";
    } while (counter-- > 1);

    std::cout << "THE END" << std::endl;
}
```

```
output:
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, THE END
```

### ex 3.2:
```cpp
#include <iostream>

int main() {

    int counter = 10;
    while (counter--) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}
```

```
output:
9, 8, 7, 6, 5, 4, 3, 2, 1, 0, THE END
```

#### ex 3.2.5:
```cpp
#include <iostream>

int main() {

    int counter = 10;
    while (counter-) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}
```

```
output:
ex_1_1.cpp: In function `int main()':
ex_1_1.cpp:6: parse error before `)'
ex_1_1.cpp:8: confused by earlier errors, bailing out
9, 8, 7, 6, 5, 4, 3, 2, 1, 0, THE END
```

#### ex 3.2.6:
```cpp
#include <iostream>

int main() {

    int counter = 10;
    while (counter-->1) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}
```

```
output:
9, 8, 7, 6, 5, 4, 3, 2, 1, THE END
```


#### ex 3.2.7:
```cpp
#include <iostream>

int main() {

    int counter = 10;
    std::cout << counter << ", ";
    while (counter-->1) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}
```

```
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, THE END
```

### ex 3.3:
```cpp
#include <iostream>

int main() {

    for (int counter = 1; counter <= 100; counter++) {
        std::cout << "counter: " << counter << std::endl;
    }
    // std::cout << counter;
}
```

```
output:
counter: 1
counter: 2
counter: 3
counter: 4
counter: 5                                                         
counter: 6
counter: 7
counter: 8
counter: 9
counter: 10
counter: 11
counter: 12
counter: 13
counter: 14
counter: 15
counter: 16
counter: 17
counter: 18
counter: 19
counter: 20
counter: 21
counter: 22
counter: 23
counter: 24
counter: 25
counter: 26
counter: 27
counter: 28
counter: 29
counter: 30
counter: 31
counter: 32
counter: 33
counter: 34
counter: 35
counter: 36
counter: 37
counter: 38
counter: 39
counter: 40
counter: 41
counter: 42
counter: 43
counter: 44
counter: 45
counter: 46
counter: 47
counter: 48
counter: 49
counter: 50
counter: 51
counter: 52
counter: 53
counter: 54
counter: 55
counter: 56
counter: 57
counter: 58
counter: 59
counter: 60
counter: 61
counter: 62
counter: 63
counter: 64
counter: 65
counter: 66
counter: 67
counter: 68
counter: 69
counter: 70
counter: 71
counter: 72
counter: 73
counter: 74
counter: 75
counter: 76
counter: 77
counter: 78
counter: 79
counter: 80
counter: 81
counter: 82
counter: 83
counter: 84
counter: 85
counter: 86
counter: 87
counter: 88
counter: 89
counter: 90
counter: 91
counter: 92
counter: 93
counter: 94
counter: 95
counter: 96
counter: 97
counter: 98
counter: 99
counter: 100
```

#### ex 3.3.6
```cpp
#include <iostream>

int main() {

    for (int counter = 1; counter <= 100; counter++) {
        while(counter%2){
            std::cout << "counter: " << counter << std::endl;
            break;
            }
    }
    //std::cout << counter;
}
```

```
output:
counter: 1
counter: 3 
counter: 5 
counter: 7 
counter: 9 
counter: 11
counter: 13
counter: 15
counter: 17
counter: 19
counter: 21
counter: 23
counter: 25
counter: 27
counter: 29
counter: 31
counter: 33
counter: 35
counter: 37
counter: 39
counter: 41
counter: 43
counter: 45
counter: 47
counter: 49
counter: 51
counter: 53
counter: 55
counter: 57
counter: 59
counter: 61
counter: 63
counter: 65
counter: 67
counter: 69
counter: 71
counter: 73
counter: 75
counter: 77
counter: 79
counter: 81
counter: 83
counter: 85
counter: 87
counter: 89
counter: 91
counter: 93
counter: 95
counter: 97
counter: 99
```

#### ex 3.3.7:
it is possible but it gives an error because variable `counter` isn't declared in `int main()` but only in the loop

#### ex 3.3.8:
```cpp
#include <iostream>

int main() {
    int counter;
    for (counter = 1; counter <= 100; counter++) {
        while(counter%2){
            std::cout << "counter: " << counter << std::endl;
            break;
            }
    }
    std::cout << counter;
}
```

```
output:
counter: 1
counter: 3
counter: 5
counter: 7
counter: 9
counter: 11
counter: 13
counter: 15
counter: 17
counter: 19
counter: 21
counter: 23
counter: 25
counter: 27
counter: 29
counter: 31
counter: 33
counter: 35
counter: 37
counter: 39
counter: 41
counter: 43
counter: 45
counter: 47
counter: 49
counter: 51
counter: 53
counter: 55
counter: 57
counter: 59
counter: 61
counter: 63
counter: 65
counter: 67
counter: 69
counter: 71
counter: 73
counter: 75
counter: 77
counter: 79
counter: 81
counter: 83
counter: 85
counter: 87
counter: 89
counter: 91
counter: 93
counter: 95
counter: 97
counter: 99
101
```

#### ex 3.3.9:
```cpp
#include <iostream>

int main() {
    int counter;
    for (counter = 1; counter <= 100; counter++) {
        while(counter%2){
            std::cout << "counter: " << 100-counter << std::endl;
            break;
            }
    }
    //std::cout << counter;
}
```

```
output:
counter: 99
counter: 97
counter: 95
counter: 93
counter: 91
counter: 89
counter: 87
counter: 85
counter: 83
counter: 81
counter: 79
counter: 77
counter: 75
counter: 73
counter: 71
counter: 69
counter: 67
counter: 65
counter: 63
counter: 61
counter: 59
counter: 57
counter: 55
counter: 53
counter: 51
counter: 49
counter: 47
counter: 45
counter: 43
counter: 41
counter: 39
counter: 37
counter: 35
counter: 33
counter: 31
counter: 29
counter: 27
counter: 25
counter: 23
counter: 21
counter: 19
counter: 17
counter: 15
counter: 13
counter: 11
counter: 9
counter: 7
counter: 5
counter: 3
counter: 1
```


### ex 2.1
```cpp
#include <iostream>

int main()
{
    //1. define the following stucture
    struct Product{
        int weight;
        float price;
    };
    //2. declare two variable of the type Product
    Product SteelCube;
    //3. fill one of them
    SteelCube.weight = 10;
    SteelCube.price = 13.42;
    //4. copy it to second variable
    Product SteelSheet;
    SteelSheet=SteelCube;
    //5. print it on `stdout`
    std::cout<<"SteelCube.weight = " << SteelCube.weight << std::endl;
    std::cout<<"SteelCube.price = " << SteelCube.price << std::endl;
    std::cout<<"SteelSheet.weight = " << SteelSheet.weight << std::endl;
    std::cout<<"SteelSheet.price = " << SteelSheet.price<< std::endl;
}
```

```
output:
SteelCube.weight = 10
SteelCube.price = 13.42
SteelSheet.weight = 10
SteelSheet.price = 13.42
```

### ex 2.2:
```cpp
#include <iostream>

int main()
{
    //1. define the following stucture
    struct Product{
        int weight;
        float price;
    };
   std::cout<< "sizeof(Product) = " << sizeof(Product) << "B" << std::endl;
   int typevar = sizeof(int) + sizeof(float);
   std::cout<< "size of structure from its type and variable = " << typevar << "B" << std::endl;
   std::cout<< "sizeof(int) + sizeof(float)" << std::endl;
   std::cout<< "number of byte used by 'int' type = " << sizeof(int) << "B";
}
```

```
output:
sizeof(Product) = 8B
size of structure from its type and variable = 8B
sizeof(int) + sizeof(float)
number of byte used by 'int' type = 4B
```