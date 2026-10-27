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

    c1->afficher();
    c2->afficher();

    double distance = *c2 - *c1 ;

    cout << "La distance entre c2 et c1 est:" << distance << endl;

}

