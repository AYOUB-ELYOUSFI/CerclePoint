#pragma once
class Point
{
private:
	double x;
	double y;

public:
	Point(double, double);
	~Point();
	bool operator==(const Point&) const;
	bool operator!=(const Point&) const;
	double operator-(Point);
	void afficher() const ;
};
