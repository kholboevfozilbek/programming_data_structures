


#include <iostream>
#include <vector>

using namespace std;


int main()
{
    std::vector<int> uni;
    uni.reserve(100);

    for(int i=1; i <= 100; ++i)
    {
        uni.push_back(i);
    }

    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    uni.resize(7);

    cout << endl << endl;
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    cout << "\nCapacity:  " << uni.capacity() << endl;

    uni.shrink_to_fit();

    cout << endl << endl;
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    cout << "\nCapacity:  " << uni.capacity() << endl;

    puts("\n");
    return 0;
}
