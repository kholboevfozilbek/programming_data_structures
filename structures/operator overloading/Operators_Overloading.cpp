#include <iostream>

using namespace std;

class Position
{
public:
    int x = 15;
    int y = 25;
    Position operator + (const Position pos2)
    {
        Position result_pos;
        result_pos.x = x + pos2.x;
        result_pos.y = y + pos2.y;
        return result_pos;
    }

    bool operator == (const Position pos2)
    {
        if ( x == pos2.x && y == pos2.y)
            return true;
        return false;
    }
};

int main()
{
    Position pos1, pos2;  //pos2.y = 50;
    Position pos3 = pos1 + pos2;
    cout << pos3.x << " , " << pos3.y << endl;


    if ( pos1 == pos2)
    {
        cout << "They are same! " << endl;
        cout << "Qornim ochqalib ketti " << endl;
    }
    else
    {
        cout << "No they are not same " <<endl;
    }
    return 0;
}
