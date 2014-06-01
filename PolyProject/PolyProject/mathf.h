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
double GradPt(double x1, double y1, double x2, double y2)
{
	double ans;
	ans = (y2 - y1) / (x2 - x1);
	return ans;
}
void AreaPF(void)
{
	int numpoints;
	printf("\nState the number of points in your figure: ");
	scanf("%d", &numpoints);
	switch (numpoints)
	{
	case 3: double AreaPF1x1, AreaPF1y1, AreaPF1x2, AreaPF1y2, AreaPF1x3, AreaPF1y3, AreaPF1ANS;
		printf("Enter the 3 points: ");
		scanf_s("%lf %lf %lf %lf %lf %lf", &AreaPF1x1, &AreaPF1y1, &AreaPF1x2, &AreaPF1y2, &AreaPF1x3, &AreaPF1y3);
		AreaPF1ANS = 0.5 * abs((AreaPF1x1 * AreaPF1y2) + (AreaPF1x2 * AreaPF1y3) + (AreaPF1x3 * AreaPF1y1) - (AreaPF1x2 * AreaPF1y1) - (AreaPF1x3 * AreaPF1y2) - (AreaPF1x1 * AreaPF1y3));
		printf("The area of the figure is %.5lf", AreaPF1ANS);
		break;

	case 4: double AreaPF2x1, AreaPF2y1, AreaPF2x2, AreaPF2y2, AreaPF2x3, AreaPF2y3, AreaPF2x4, AreaPF2y4, AreaPF2ANS;
		printf("Enter the 4 points: ");
		scanf_s("%lf %lf %lf %lf %lf %lf %lf %lf", &AreaPF2x1, &AreaPF2y1, &AreaPF2x2, &AreaPF2y2, &AreaPF2x3, &AreaPF2y3, &AreaPF2x4, &AreaPF2y4);
		AreaPF2ANS = 0.5 * abs((AreaPF2x1 * AreaPF2y2) + (AreaPF2x2 * AreaPF2y3) + (AreaPF2x3 * AreaPF2y4) + (AreaPF2x4 * AreaPF2y1) - (AreaPF2x2 * AreaPF2y1) - (AreaPF2x3 * AreaPF2y2) - (AreaPF2x4 * AreaPF2y3) - (AreaPF2x1 * AreaPF2y4));
		printf("The area of the figure is %.5lf", AreaPF2ANS);
		break;

	default: printf("INVAILD NUMBER!");
		printf("Press Enter to Exit.");
		getchar();
		getchar();
		break;
	}
}