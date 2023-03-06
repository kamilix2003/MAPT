#include <iostream>
using namespace std;

int main(){
    char tab[] = "Ala ma kota";
    char *p = tab;

    float array[] = {3.14, 1.41, 2.71};
    float *p_a = array;

    while ( *p ) {
        cout << *(p++);   // *(p++)
    }
    cout << endl;

    while ( p_a < &array[sizeof(array)/sizeof(float)])   
    {
        std::cout<<*p_a++ << ' ';
    }
}

// result: Ala ma kota
// while( p ) {}  what kind of mistake?
