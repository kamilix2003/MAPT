#include <iostream>
#include <list>
#include <stdlib.h>
#include <ctime>
#include <iterator>
#include <bits/stdc++.h>

template<typename T>
void print_list(std::list<T> *list)
{
    for(T c : *list){ std::cout<<c<<" "; }
    std::cout<<"\n";
}

void add_random_letters(std::list<char> *list, int count)
{
    std::srand(time(NULL));
    while(count > 0)
    {
        list->push_back(('a'+rand()%24));
        count--;
    }
}

void pop_char_in_middle(std::list<char> *list, int count)
{
    while(count > 0)
    {
        std::list<char>::iterator it = list->begin();
        std::advance(it, list->size()/2);
        list->erase(it);
        count--;
    }
}

void capitilize_letters(std::list<char> *list, std::list<char>::iterator it, int count)
{
    while(count > 0)
    {
        *it=char(*it-32);
        std::advance(it,1);
        count--;
    }
    print_list(list);
}

int main()
{
    std::list<char> list;
    // 1.
    std::cout<<"list with 10 letter in alphabetical order:\n";
    char letter = 'a';
    while(list.size() < 10)
    {
        list.push_back(letter++);
    }
    print_list(&list);
    // 2.
    std::cout<<"list with added 3 random letters:\n";
    add_random_letters(&list, 3);
    print_list(&list);
    // 3.
    std::cout<<"list with 2 erased elements\n";
    pop_char_in_middle(&list, 2);
    print_list(&list);
    std::cout<<"capitilized 3 elements\n";
    capitilize_letters(&list,list.begin(),3);
    // 4.
    std::cout<<"reversed list\n";
    list.reverse();
    print_list(&list);
}