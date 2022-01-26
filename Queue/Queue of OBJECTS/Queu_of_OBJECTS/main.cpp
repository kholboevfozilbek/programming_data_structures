
#include <iostream>
#include "template_unbounded_Queue_of_Objects.h"

using namespace std;


int main()
{
    Queue<Footballer> comanda;

    Footballer Real[6];

    Real[0].setAll("Cristiano", "Ronaldo", 7, 84.15,87, 90, 90, "Real Madrid", "forward" );
    Real[1].setAll("Karim", "Benzema", 9, 83.123, 84, 86, 88, "Real Madrid", "forward");
    Real[2].setAll("Sergio", "Ramos", 4, 184, 82, 90, 83, "Real Madrid", "defender");
    Real[3].setAll("Isco", "", 22, 176, 84, 87, 89, "Real Madrid", "midfielder");

    comanda.enque(Real[0]);
    comanda.enque(Real[1]);
    comanda.enque(Real[2]);
    comanda.enque(Real[3]);
    cout << "Size: " << comanda.size();

    //comanda.print();

     Footballer top = comanda.front();
     Footballer last = comanda.back();

     cout << "\n\nFirst player:  " << top << endl;

     cout << "\nLast player:  " << last << endl;
     cout << "\nIs comanda is empty? " << comanda.empty() << endl;


     cout << "\n\nRemove the first-most player : " << comanda.deque() << endl;

     cout << "\nSize: " << comanda.size() << endl;

     comanda.print();

     cout << "\n\nQueue<Footballer> copy_comanda(comanda); " << endl;
     Queue<Footballer> copy_comanda(comanda);

     cout << "\nCopy comanda " << endl;
     cout << "Size:  " << copy_comanda.size() << endl;
     cout << "Empty?  " << copy_comanda.empty() << endl;
     copy_comanda.print();

     cout << "\nRemove Copy_Comanda first:  " << copy_comanda.deque() << endl;
     cout << "\nRemove Copy_Comanda first:  " << copy_comanda.deque() << endl;

     cout << "\nCopy comanda " << endl;
     cout << "Size:  " << copy_comanda.size() << endl;
     cout << "Empty?  " << copy_comanda.empty() << endl;
     copy_comanda.print();

     cout << "\n\nComanda " << endl;
     cout << "Size:  " << comanda.size() << endl;
     cout << "Empty?  " << comanda.empty() << endl;
     comanda.print();

     Real[4].setAll("Gareth", "Bale", 9, 185, 90, 88, 89, "Tottenham", "forward");
     Real[5].setAll("Toni", "Kross", 8, 183, 81, 86, 88, "Real Mardir", "midfielder");
    comanda.enque(Real[4]);
    comanda.enque(Real[5]);

    comanda.print();

    copy_comanda = comanda;

    if ( copy_comanda == comanda )
        cout << "\n\nCopy comanda = comanda " << endl;


 /*    comanda.clear();
     cout << "\nIs comanda is empty? " << comanda.empty() << endl;
     cout << "\nSize: " << comanda.size() << endl;
     comanda.print();
 */


    return 0;
}
