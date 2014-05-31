#define _USE_MATH_DEFINES
#include <math.h>
/*Trigo Formulas*/
double DegRad(double deg1)
{
	double rad1;
	rad1 = deg1 * M_PI / 180;
	return rad1;
}

double RadDeg(double rad2)
{
	double deg2;
	deg2 = rad2 * 180 / M_PI;
	return deg2;
}

double CosS(double b, double c, double theta)
{
	double a;
	a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c) * RadDeg(cos(theta)));
	return a;
}

double CosA(double a, double b, double c)
{
	double theta;
	theta = RadDeg(acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)));
	return theta;
}

double SinA(double sna, double a, double b)
{
	double ab, sna1;
	sna1 = sin(sna * (M_PI / 180.0));
	ab = asin((sna1 / a) * b);
	return ab;
}
double SinS(double a, double sna, double snb)
{
	double b;
	b = (a / DegRad(sna)) * DegRad(snb);
	return b;
}
/*Plane Geo Formulas*/
float MidPt(float x1, float y1, float x2, float y2)
{
	float x, y;
	float ANS[2];
	x = (x1 + x2) / 2;
	y = (y1 + y2) / 2;
	ANS[0] = x;
	ANS[1] = y;
	return ANS[2];
}
double DistPt(double x1, double y1, double x2, double y2)
{
	double ans;
	ans = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return ans;
}