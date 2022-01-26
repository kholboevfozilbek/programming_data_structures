
#include <iostream>
#include <set>
#include <iterator>

using namespace std;


int main()
{
/*    set<int> uni;

    uni.insert(3);
    uni.insert(3);
    uni.insert(1);
    uni.insert(4);
    uni.insert(5);
    uni.insert(5);

    set<int>::iterator it;

    for(it = uni.begin(); it != uni.end(); ++it)
    {
        cout << *it << " -> ";
    }

    cout << "\nNumber of elements:  " << uni.size() << endl;
    puts("\n");

    set<int, greater<int>> cop;

    cop.insert(9);
    cop.insert(4);
    cop.insert(15);
    cop.insert(1);
    cop.insert(-3);

    set<int>::iterator it2;

    for(it2 = cop.begin(); it2 != cop.end(); ++it2)
    {
        cout << *it2 << " -> ";
    }
    cout << endl << endl;

    cop.erase(4);

    for(it2 = cop.begin(); it2 != cop.end(); ++it2)
    {
        cout << *it2 << " -> ";
    }
    cout << endl;

    //cop.clear();

    cout << "\nSize:  " << cop.size();

    system("CLS");

    for(it2 = cop.begin(); it2 != cop.end(); ++it2)
    {
        cout << *it2 << " -> ";
    }
    cout << "\nSize:  " << cop.size() << endl;

    if (cop.find(9) != cop.end())
        cout << "\nFound " << endl;
*/

    set<int> uni;
    uni.insert(9);
    uni.insert(4);
    uni.insert(15);
    uni.insert(1);

    set<int>::iterator it;

    for(it = uni.begin(); it != uni.end(); ++it)
        cout << *it << " -> ";
    cout << endl;

    cout << uni.empty() << endl;
    return 0;
}
