#pragma once
#include "Point.h"

class Cercle
{

private:
	double rayon;
	Point* centre;


public:
	Cercle(double a, Point* centre );
	~Cercle();
	bool operator==(const Cercle&) const;
	bool operator!=(const Cercle&) const;
	Cercle(const Cercle& c);
	void afficher() const;
	double operator-(Cercle);


};
