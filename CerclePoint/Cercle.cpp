#include "Cercle.h"
#include <math.h>
#include <iostream>

using namespace std;

Cercle::Cercle(double r, Point* p)
{
	this->rayon = r;
	this->centre = p;

}

Cercle::~Cercle()
{
}

bool Cercle::operator==(const Cercle& c) const
{
	if (this->rayon == c.rayon && *(this->centre) == *(c.centre))
	{
		return true;
	}
	else return false;
}

bool Cercle::operator!=(const Cercle& c) const
{
	if (this->rayon == c.rayon && *(this->centre) == *(c.centre))
	{
		return false;
	}
	else return true;
}

Cercle::Cercle(const Cercle& c)
{
	this->rayon = c.rayon;
	this->centre = new Point(*(c.centre));
}

void Cercle::afficher() const
{
	cout << "le rayon est:" << this->rayon << endl;
	cout << "Les cordonnes du rayon:";
		this->centre->afficher();
		cout << endl;
}

double Cercle::operator-(Cercle c)
{


	return *(this->centre) - *(c.centre);
}