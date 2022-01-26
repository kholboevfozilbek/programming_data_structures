

#include <iostream>
#include "interface_library.h"

using namespace std;



int main()
{

    Queue<Footballer> team;

    Footballer Ronaldo, Messi, Neymar;
    Ronaldo.setAll("Cristiano", "Ronaldo", 7, "attacker", "Real Madrid", 185.96, 76, 126.5);
    Messi.setAll("Leonel", "Messi", 10, "attacker", "Barcelona", 173.2, 78, 150.78);
    Neymar.setAll("", "Neymar", 10, "attacker", "Paris", 178.45, 65, 95.67);

    team.enque(Ronaldo);
    team.enque(Messi);
    team.enque(Neymar);

    cout << "\nTeam:  "; team.print();

    cout << "Size:  " << team.size() << endl;
    cout << "First:  "<< team.front() << endl;
    cout << "Last:  " << team.back() << endl;
    cout << "pop:  " << team.dequeue() << endl;
    cout << "First:  "<< team.front() << endl;




/*  Queue<int*> team;
    team.enque(7);
    team.enque(9);
    team.enque(4);
    team.enque(11);
    team.enque(2);
    team.enque(13);

    cout << "\nQueue:  "; team.print();
    cout << "Size:  " << team.size() << endl;
    cout << "First:  "<< team.front() << endl;
    cout << "Last:  " << team.back() << endl;

    cout << "pop:  " << team.dequeue() << endl;
    cout << "pop:  " << team.dequeue() << endl;

    cout << "\nQueue:  "; team.print();
    cout << "Size:  " << team.size() << endl;
    cout << "First:  "<< team.front() << endl;
    cout << "Last:  " << team.back() << endl;

*/
    puts("");
    return 0;
}
