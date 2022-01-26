

#include <iostream>
#include <stdlib.h>
#include <string>
#include "vector_container.h"

using namespace std;

struct Car
{
private:
    string brand;
    string name;
    double speed;
    float price;
    string color;

public:

    Car(string B="", string N="", double S=0, float P=0, string C="")
    {
        brand = B; name = N; speed = S; price = P; color = C;
    }

    void setALL(string B="", string N="", double S=0, float P=0, string C="")
    {
        brand = B; name = N; speed = S; price = P; color = C;
    }

    string getName() {return name;}
    string getbrand() {return brand;}
    string getcolor() {return color;}
    double getSpeed() {return speed;}
    float getPrice() {return price; }

    friend ostream& operator<< (ostream& output, const Car& o);
};

ostream& operator<< (ostream& output, const Car& o)
{
    output << "\nBrand:  " << o.brand <<"\nName:  " << o.name << "\nSpeed:  " << o.speed << " km/h\nPrice:  $mln " << o.price << endl;
    return output;
}

int main()
{
/*
    Vector<Car> uni;

    Car bugati("Bugatti", "Chiron", 450, 4.3, "blue");
    Car lambo("Lamborghini", "Avendator", 380, 3.8, "yellow");

    Car mosh[5];
    mosh[0].setALL("Mercades", "Benz", 280.45, 3.2, "black");

    //Car* p = &lambo;

    //Car* ferari = new Car("Ferrari", "Porsche", 375.69, 3.745, "red");

    Car* poy = new Car[5];  // dynamic array of objects

    poy[0].setALL("Wolkswagen", "Sruga", 215.36, 0.123, "grey");

    uni.push_back(bugati);
    uni.push_back(lambo);
    uni.push_back(mosh[0]);
    uni.push_back(poy[0]);

    cout << "Vector:  \n"; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    uni.pop_back();
    uni.pop_back();

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    Car* arr = new Car[4];

    arr[0].setALL("Chevrolet", "Malibu", 185.76, 320, "white");
    arr[1].setALL("Chevrolet", "Captiva", 200.76, 285.96, "black");
    arr[0].setALL("Chevrolet", "Gentra", 175.9, 120, "mocri-asphalt");

    system("CLS");
    Vector<Car> uzb(uni);
//    uzb.push_back(arr[0]);
//    uzb.push_back(arr[1]);
//    uzb.push_back(arr[2]);
//

    cout << "\nuzb:  \n";
    print(uzb);*/

    /*Vector<int> uni;

    uni.push_back(4);
    uni.push_back(7);
    uni.push_back(9);
    uni.push_back(11);
    uni.push_back(2);

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    uni.pop_back();
    uni.pop_back();

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    system("CLS");
    Vector<int> v2(uni);

    cout << "Vectorv2:  "; print(v2);
    cout << "Size:  " << v2.size() << endl;
    cout << "First: " << v2.front() << endl;
    cout << "Last: " << v2.back() << endl;

    v2.pop_back();

    v2.push_back(13);
    v2.push_back(7);


    cout << "Vectorv2:  "; print(v2);
    cout << "Size:  " << v2.size() << endl;
    cout << "First: " << v2.front() << endl;
    cout << "Last: " << v2.back() << endl;

    cout << "\n-------------------\n";

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    system("CLS");
    v2 = uni;
    if (v2 == uni)
        cout << "Success! " << endl;

    cout << "Vectorv2:  "; print(v2);
    cout << "Size:  " << v2.size() << endl;
    cout << "First: " << v2.front() << endl;
    cout << "Last: " << v2.back() << endl;

    cout << "\n-------------------\n";

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;

    v2.pop_back();
    uni.push_back(713);

    cout << "Vectorv2:  "; print(v2);
    cout << "Size:  " << v2.size() << endl;
    cout << "First: " << v2.front() << endl;
    cout << "Last: " << v2.back() << endl;

    cout << "\n-------------------\n";

    cout << "Vector:  "; print(uni);
    cout << "Size:  " << uni.size() << endl;
    cout << "First: " << uni.front() << endl;
    cout << "Last: " << uni.back() << endl;
    */
    return 0;
}
