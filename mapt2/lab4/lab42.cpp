#include <iostream>
#include <queue>

void push_limited_queue(std::queue<int> q, int limit, int value)
{
    if(q.size() >= limit)
    {
        std::cout<<"queue is full!\n";
        return;
    }
    q.push(value);
}

void display(std::queue<int>& q)
{
    int size = q.size();
    for(int i = 0; i < size; i++)
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    std::queue<int> q;
    for(int i = 0; i < 12; i++)
    {
        q.push(i);
    }
    display(q);
    std::string s = q.empty() ? "queue is empty!\n" : "queue isn't empty";
    std::cout<< "\n" << s ;
}