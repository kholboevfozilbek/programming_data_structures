#include <iostream>
#include <string>
using namespace std;

struct fruit{
    int weight;
    double price;
}banana, apple, melon ;

int main()
{

    banana.weight = 2;
    banana.price = 8.23;


    banana.print(banana);
    return 0;
}

void fruit::print(fruit meva)
{
    cout << meva.weight  << endl;
    cout << meva.price << endl;
}
