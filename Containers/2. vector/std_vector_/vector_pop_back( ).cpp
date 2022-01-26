


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


    cout << "\nOur vector:  ";
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni.at(i) << "  ";
    }

    cout << "\nSize:  " << uni.size() << endl;
    cout << "Capacity: " << uni.capacity() << endl;

    cout << "\nFirst:  " << uni.front() << endl;
    cout << "Last:  " << uni.back() << endl;

    uni.pop_back();

    cout << "\nOur vector:  ";
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni.at(i) << "  ";
    }

    cout << "\nSize:  " << uni.size() << endl;
    cout << "Capacity: " << uni.capacity() << endl;

    cout << "\nFirst:  " << uni.front() << endl;
    cout << "Last:  " << uni.back() << endl;

    puts("\n\n");
    return 0;
}



