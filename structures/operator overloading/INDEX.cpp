#include <iostream>
#include <stdexcept>
using namespace std;

class Employee
{
    string name;
    string surname;
    string country;
    string club;
    string position;

public:
    Employee(string N="", string S="", string C="", string CL="" , string P="")
    {
        name = N;
        surname = S;
        country  = C;
        club = CL;
        position = P;
    }

    /// operator overloading
      string& operator [] (int i)
      {
          switch(i)
          {
              case 0: return name; break;
              case 1: return surname; break;
              case 2: return country; break;
              case 3: return club; break;
              case 4: return position; break;
              default: cout << "Please choose valid number of the field !";
              throw logic_error("Unaqa element yoq, narmalnisini tanla");
          }
      }

};

int main()
{
    Employee Ronaldo("Critiano", "Ronaldo", "Portugal", "Real Madrid", "attacker");

    string club = Ronaldo[3];

    cout << club << endl;

    return 0;
}
