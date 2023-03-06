#include <iostream>

int main()
{
    char text[] = "This way to... adveture! (willump noises)";
    char *p = text;
    int length = (sizeof(text)-1)/sizeof(char);
    std::cout<< "length: " << length << " characters \n";
    std::cout<< p << "\n";
    while (p < &text[length])
    {
        std::cout<<*p<< ' ';
        p++;
    }
    
}