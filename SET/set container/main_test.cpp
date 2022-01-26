

#include <iostream>
#include "set_ADT.h"


using namespace std;


int main()
{
    Set<int> uni;

    uni.insert(3);
    uni.insert(1);
    uni.insert(4);

    cout << "\nSet: "; uni.print();
    cout << "\nSize:  " << uni.size() << endl;

    puts("\n");
    return 0;
}
