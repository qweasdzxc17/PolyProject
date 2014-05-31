#define _USE_MATH_DEFINES
#include <math.h>
/*Trigo Formulas*/
double DegRad(double deg1) //Confirmed
{
	double rad1;
	rad1 = deg1 * (M_PI / 180);
	return rad1;
}

double RadDeg(double rad2) //Confirmed
{
	double deg2;
	deg2 = rad2 * (180 / M_PI);
	return deg2;
}

double CosS(double b, double c, double theta) //Confirmed
{
	double a;
	a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c) * cos(DegRad(theta)));
	return a;
}

double CosA(double a, double b, double c) //Confirmed
{
	double theta;
	theta = RadDeg(acos(((pow(a, 2) + pow(b, 2)) - pow(c, 2)) / (2 * a * b)));
	return theta;
}

double SinA(double sna, double a, double b) //Confirmed
{
	double ab;
	ab = RadDeg(asin((sin(DegRad(sna)) / a) * b));
	return ab;
}
double SinS(double a, double sna, double snb) //Confirmed
{
	double b;
	b = (a / sin(DegRad(sna))) * sin(DegRad(snb));
	return b;
}
/*Plane Geo Formulas*/
void MidPt(float x1, float y1, float x2, float y2)
{
	float x, y;
	float ANS[2];
	x = (x1 + x2) / 2;
	y = (y1 + y2) / 2;
	ANS[0] = x;
	ANS[1] = y;
	printf("The MidPt is (%.2f, %.2f)", x, y);
}
double DistPt(double x1, double y1, double x2, double y2)
{
	double ans;
	ans = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return ans;
}