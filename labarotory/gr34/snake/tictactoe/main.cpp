#include <iostream>
#include <conio.h>
using namespace std;

bool gameOver;
const int width = 27;
const int height = 9;
const int yon = 12;
const int balandlik = 12;
char ground[3][3];
int choice;

void Draw()
{
    system("cls");
    for (int i=0; i<width; ++i)
        cout << "#";
        cout << "\t \tWelcome!. Play Tic Tac Toe" ;
    cout << endl;

    for (int i=0; i<height; ++i)
    {
        for (int k=0; k<width; ++k)
            if ( i == 2 || i == 5)
                cout << "#";

        for (int j=0; j<width; ++j)
        {
            if ( i !=2 && i != 5)
            {
                if (j == 0 || j == width-1)
                    cout << "#";
                else if (j == 9 || j == 18)
                    cout << "#";
                else
                    cout << " ";
            }

        }

        cout << endl;
    }


    for (int i=0; i<width; ++i)
        cout << "#";
    cout << endl;



    cout << "\nChoose players " <<endl;
    cout << "1. Player1 -> X " <<endl;
    cout << "2. Player2 -> O"<<endl;
    cout << "===========================" <<endl;
    cout << endl;
}

void Input()
{
    for (int i=1; i<=9; ++i)
    {
        if (i % 2 != 0)
        {
            cout << "X: your turn ";
            cin >>choice;
            system("cls");
        }

        else
        {
            cout << "O: your turn ";
            cin >>choice;
        }
        system("cls");

        switch (choice)
        {
        case 1:
            if (ground[0][0] == '\0')
            {
                if ( i % 2 != 0)
                {
                    ground[0][0] = 'X';
                }
                else
                    ground[0][0] = 'O';
                break;

            }
            else
            {
                cout << "Please Enter in empty place!\n";
                break;
            }
        case 2:
             if (ground[0][1] == '\0')
            {
                if ( i % 2 != 0)
                    ground[0][1] = 'X';
                else
                    ground[0][1] = 'O';
                break;
            }
            else
            {
                cout << "Please Enter in empty place!\n";
                break;
            }

        case 3:
              if (ground[0][2] == '\0')
            {
                if ( i % 2 != 0)
                    ground[0][2] = 'X';
                else
                    ground[0][2] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        case 4:
            if (ground[1][0] == '\0')
            {
                if ( i % 2 != 0)
                    ground[1][0] = 'X';
                else
                    ground[1][0] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        case 5:
             if (ground[1][1] == '\0')
            {
                if ( i % 2 != 0)
                    ground[1][1] = 'X';
                else
                    ground[1][1] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }


        case 6:
            if (ground[1][2] == '\0')
            {

                if ( i % 2 != 0)
                    ground[1][2] = 'X';
                else
                    ground[1][2] = 'O';
                break;

            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        case 7:
            if (ground[2][0] == '\0')
            {

                if ( i % 2 != 0)
                    ground[2][0] = 'X';
                else
                    ground[2][0] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        case 8:
            if (ground[2][1] == '\0')
            {
                if ( i % 2 != 0)
                    ground[2][1] = 'X';
                else
                    ground[2][1] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        case 9:
            if (ground[2][1] == '\0')
            {
                if ( i % 2 != 0)
                    ground[2][2] = 'X';
                else
                    ground[2][2] = 'O';
                break;
            }
            else
            {
                    cout << "Please Enter in Empty place !\n";
                    break;
            }

        default:
            cout << "Please Enter into proper place " <<endl;
        }

        cout << "  " << " | " << ground[0][0] << " | " << ground[0][1] << " | " << ground[0][2] << " | " <<endl;
        cout << "  " << "---------------" <<endl;
        cout << "  " << " | " << ground[1][0] << " | " << ground[1][1] << " | " << ground[1][2] << " | " <<endl;
        cout << "  " << "---------------" <<endl;
        cout << "  " << " | " << ground[2][0] << " | " << ground[2][1] << " | " << ground[2][2] << " | " <<endl;
        cout << "  " << "---------------" <<endl;

        /// LOGIC


            ///ROWS CHECKING
            if (ground[0][0] != '\0' )
            {
                if (ground[0][0] == ground[0][1] && ground[0][1] == ground[0][2])
                {
                    if (ground[0][0] == 'X')
                    {
                        gameOver = true;
                        cout << "X WINS ";
                    }

                    else
                    {
                        cout << "O WINS!";

                        gameOver = true;
                    }
                    break;

                }

            }
            if (ground[1][0] != '\0')
            {
                if (ground[1][0] == ground[1][1] && ground[1][1] == ground[1][2])
                {
                    if (ground[1][0] == 'X')
                    {
                        cout << "X WINS!";
                        gameOver = true;
                    }
                    else
                    {
                        cout << "O WINS";
                         cout << "Manashu chumo ";
                        gameOver = true;
                    }
                    break;
                }
            }

            if (ground[2][0] != '\0')
            {

                if (ground[2][0] == ground[2][1] && ground[2][1] == ground[2][2])
                {
                    if (ground[2][0] == 'X')
                    {
                        cout << "X WINS";
                        gameOver = true;
                    }
                    else
                    {
                        cout << "O WINS";
                        gameOver = true;
                    }
                    break;

                }
            }

           ///shettda qoldik!
           ///COLUMNS CHECKING!!!
          if (ground[0][0] != '\0')
          {
               if (ground[0][0] == ground[1][0] && ground[1][0] == ground[2][0])
               {
                   if (ground[0][0] == 'X')
                   {
                       cout << "X WINS!";
                       gameOver = true;
                   }
                   else
                   {
                       cout << "O WINS!";
                       gameOver = true;
                   }
                   break;
               }

          }
          if (ground[0][1] == '\n')
          {
               if (ground[0][1] == ground[1][1] && ground[1][1] == ground[2][1])
               {
                   if (ground[0][1] == 'X')
                   {
                       cout << "X WINS";
                       gameOver = true;
                   }
                   else
                   {
                       cout << "O WINS";
                        cout << "Bunda muammo";
                       gameOver = true;
                   }
                   break;
               }
          }
           if (ground[0][2] != '\0')
           {
               if (ground[0][2] == ground[1][2] && ground[1][2] == ground[2][2])
               {
                   if (ground[0][2] == 'X')
                   {
                       cout << "X WINS ";                                  /// shunda chiqdi muammo!
                       gameOver = true;
                   }
                   else
                   {
                       cout << "O WINS";
                       gameOver = true;
                   }
                   break;
               }
           }

           ///DIAGONAL CHECKING

           if (ground[0][0] != '\0')
           {
               if (ground[0][0] == ground[1][1] && ground[1][1] == ground[2][2])
               {
                   if (ground[0][0] == 'X')
                   {
                       cout << "X WINS!";
                       gameOver = true;
                   }
                   else
                   {
                       cout << "O WINS";
                       gameOver = true;
                   }
                   break;

               }
           }

           if (ground[2][0] != '\0')
           {
               if (ground[0][2] == ground[1][1] && ground[1][1] == ground[2][0])
               {
                   if (ground[2][0] == 'X')
                   {
                       cout << "X WINS!";
                       gameOver = true;
                   }
                   else
                   {
                       cout << "O WINS!";
                       gameOver = true;
                   }
                   break;
               }
           }


        /// LOGIC ENDS

            if ( i == 9)
            {
                gameOver = true;
                cout << "Draw!" <<endl;
            }


    }
}
void Output()
{

}

void Logic()
{
}

int main ()
{
    while (gameOver != true)
    {
        Draw();
        Input ();
        Logic();
    }

    return 0;
}
