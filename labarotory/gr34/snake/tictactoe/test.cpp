#include <iostream>
using namespace std;
char g[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ',  ' '} };
bool gameOver;
void input()
{
    g[0][0] = 'X';
    g[0][1] = 'X';
    g[0][2] = 'X';

    if (g[0][0] == g[0][1] && g[0][1] == g[0][2])
        gameOver = true;
}

int main ()
{


    while (!gameOver)
    {
        input();
        cout << " Game over is working " <<endl;

    }
}
