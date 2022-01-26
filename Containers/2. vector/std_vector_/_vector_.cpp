

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    std::vector<int> uni;

    uni.push_back(4);
    uni.push_back(7);
    uni.push_back(9);
    uni.push_back(11);

    cout << "\nCurrent number of elements stored in vector:  " << uni.size() << endl;
    cout << "\nCapacity:  " << uni.capacity() << endl;
    cout << "Empty? : " << uni.empty() << endl;
    cout << "\nMaximum size:  " << uni.max_size() << endl;

    puts("\n");
    return 0;
}