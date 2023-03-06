#include <iostream>
using namespace std;

struct Product {
	int weight;
	float price;
};

int main() {
	Product p = {1, .5};
	Product *x = &p;

	p.weight = 2;
	x->weight = 4;

    Product tab[10];
    for(int i = 0; i < 10; i++)
    {   
        tab[i] = *x;
    }
    Product *pTab;
    pTab = tab+4; // pTab = &tab[4];
    std::cout<<pTab->price<< ' ' << pTab->weight;
    
    // pTab points to 5th element of table tab
    // use it to print 5th element of the table  

}
