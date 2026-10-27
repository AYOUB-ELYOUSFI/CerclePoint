#include "Point.h"
#include "Cercle.h"
#include <iostream>
using namespace std;
int main()
{
    
    Point* p1 = new Point(5, 2);
    Point* p2 = new Point (7, 3);

    Cercle* c1= new Cercle(4.0, p1);
    Cercle* c2 = new Cercle(5.0, p2);

    cout << "c1:"  << endl;
    c1->afficher();
    cout << "-------------" << endl;
    cout << endl;
    cout << "c2:" << endl;
    c2->afficher();
    cout << "-------------" << endl;

    if (*c1 == *c2) cout << "c1 == c2";
    else cout << "c1 != c2";
    cout << endl;
    cout << "-------------" << endl;
    cout << endl;

    double distance = *c2 - *c1 ;

    cout << "La distance entre c2 et c1 est:" << distance << endl;

    cout << endl;
    cout << "-------------" << endl;

    delete c1;
    delete c2;
    c1 = c2 = nullptr;
}

