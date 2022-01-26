

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    std::vector<int> uni;
    uni.reserve(10);

    for(int i=1; i <= 10; ++i)
    {
        uni.push_back(i);
    }

    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    uni.resize(5);

    //system("CLS");
    cout << endl;
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    uni.resize(8, 100);

    cout << endl;
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }

    uni.resize(12);

    cout << endl;
    for(int i=0; i<uni.size(); ++i)
    {
        cout << uni[i]  << "  ";
    }



    return 0;
}