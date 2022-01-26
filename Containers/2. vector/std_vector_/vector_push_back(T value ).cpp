


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> uni;

    uni.reserve(7);

    uni.push_back(4);
    uni.push_back(7);
    uni.push_back(9);
    uni.push_back(11);
    uni.push_back(1);
    uni.push_back(-5);
    uni.push_back(6);
    uni.push_back(13);

    cout << "\nOur vector:  ";
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni.at(i) << "  ";
    }

    cout << "\nSize:  " << uni.size() << endl;
    cout << "Capacity: " << uni.capacity() << endl;
    puts("\n\n");
    return 0;
}


