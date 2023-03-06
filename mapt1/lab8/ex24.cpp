#include <iostream>

struct pc
{
    std::string cpu;
    int ram;
};


int main()
{
    char *p_char;
    int *p_int;
    pc *p_pc;
    std::cout<< "size of pointer to char: "<< sizeof(p_char)*8 << " Bits\n";
    std::cout<< "size of pointer to int: "<< sizeof(p_int)*8 << " Bits\n";
    std::cout<< "size of pointer to structure: "<< sizeof(p_pc)*8 << " Bits\n";

}