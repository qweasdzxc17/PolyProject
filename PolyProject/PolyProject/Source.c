/*  Name:  Lucas Wong                 Class: P1K1			StudentID: 10158839F
Filename:  source.c  ( e.g your_name.c )
Source of your formulas: Addtional Mathematics 6th Edition ShingLee
Project Description: A collection of formulas from the A maths Textbook
*/

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>

//Global Variables
int exitchoice = 1;

//Custom Functions
void backexit(void);
int menu1(void);
int menu2(void);
int menu3(void);
void cpause(void);
double DegRad(double deg1);
double RadDeg(double rad2);
double CosS(double b, double c, double theta);
double CosA(double a, double b, double c);
double SinA(double sna, double a, double b);
double SinS(double a, double sna, double snb);
void MidPt(float x1, float y1, float x2, float y2);
double DistPt(double x1, double y1, double x2, double y2);
double GradPt(double x1, double y1, double x2, double y2);
void AreaPF(void);

//Main Program
void main(void)
{
	while (exitchoice == 1)
	{
		int cho1 = menu1();
		switch (cho1)
		{
		case 1:;
			int cho2 = menu2();
			switch (cho2)
			{
			case 1:; double deg, ans11;
				printf("\nEnter the Degrees to be Converted: ");
				scanf_s("%lf", &deg);
				ans11 = DegRad(deg);
				printf("%lf deg is equal to %.5lf rad.", deg, ans11);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 2:; double rad, ans12;
				printf("\nEnter the Radians to Converted: ");
				scanf_s("%lf", &rad);
				ans12 = RadDeg(rad);
				printf("\n%lf radians is equal to %.4lf degrees.", rad, ans12);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 3:; double cossb, cossc, cosstheta, ans13;
				printf("\nEnter the side b, c and theta in the stated order (only spaces no commas): ");
				scanf_s("%lf %lf %lf", &cossb, &cossc, &cosstheta);
				ans13 = CosS(cossb, cossc, cosstheta);
				printf("\nYour missing side is %.4lf (units)", ans13);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 4:; double cosaa, cosab, cosac, ans14;
				printf("\nPlease note that a and b are the included sides.");
				printf("\nEnter the sides a, b and c (only spaces no commas): ");
				scanf_s("%lf %lf %lf", &cosaa, &cosab, &cosac);
				ans14 = CosA(cosaa, cosab, cosac);
				printf("\nYour Angle is %.4lf deg,", ans14);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 5:; double sinsa, sinssina, sinssinb, ans15;
				printf("\nEnter Side A, Sin(A) and Sin(B) (in deg): ");
				scanf_s("%lf %lf %lf", &sinsa, &sinssina, &sinssinb);
				ans15 = SinS(sinsa, sinssina, sinssinb);
				printf("\nYour side is %.4lf (units)", ans15);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 6:; double sinasina, sinaa, sinab, ans16;
				printf("\nEnter Sin(A), side A and side B (Enter the angles not the sin value): ");
				scanf_s("%lf %lf %lf", &sinasina, &sinaa, &sinab);
				ans16 = SinA(sinasina, sinaa, sinab);
				printf("\nYour Angle is %.4lf deg", ans16);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 7: printf("\nGoing back to the main menu.\n\n");
				cpause();
				system("cls");
				break;

			default: printf("\nINVAILD CHOICE!\n");
				cpause();
				system("cls");
				break;
			}
			break;

		case 2:;
			int cho3 = menu3();
			switch (cho3)
			{
			case 1:; float mpx1, mpy1, mpx2, mpy2;
				printf("\nEnter the two points x1 y1 x2 y2: ");
				scanf_s("%f %f %f %f", &mpx1, &mpy1, &mpx2, &mpy2);
				MidPt(mpx1, mpy1, mpx2, mpy2);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 2:; double dpx1, dpy1, dpx2, dpy2, ans22;
				printf("\nEnter the two points x1 y1 x2 y2: ");
				scanf_s("%lf %lf %lf %lf", &dpx1, &dpy1, &dpx2, &dpy2);
				ans22 = DistPt(dpx1, dpy1, dpx2, dpy2);
				printf("\nThe Distance Between the Two points is %.4lf", ans22);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;
			case 3:; double gpx1, gpy1, gpx2, gpy2, ans23;
				printf("\nEnter the two points x1 y1 x2 y2: ");
				scanf_s("%lf %lf %lf %lf", &gpx1, &gpy1, &gpx2, &gpy2);
				ans23 = GradPt(gpx1, gpy1, gpx2, gpy2);
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					cpause();
				}
				break;

			case 4: printf("\nYou can only select 3 and 4 points.\n");
				AreaPF();
				backexit();
				if (exitchoice == 1)
				{
					system("cls");
					break;
				}
				else if (exitchoice == 2)
				{
					printf("\nBye-Bye!\n");
					printf("Press Enter to Exit.\n");
					cpause();
				}
				break;

			case 5: printf("\nGoing back to the main menu.\n\n");
				cpause();
				system("cls");
				break;

			default: printf("\nINVAILD CHOICE!\n");
				cpause();
				system("cls");
				break;

			}
		}
	}
}

void backexit(void)
{
	printf("\n\nWould you like to do another caculation?\n");
	printf("[1] Yes   [2] No\n");
	printf("\nChoice: ");
	scanf_s("%d", &exitchoice);
	if (exitchoice != 1 && exitchoice != 2)
	{
		printf("INVALID CHOICE!.\n");
		printf("Press Enter to exit.\n");
		getchar();
		getchar();
	}
}

void cpause(void)
{
	printf("Press Enter to continue.\n");
	getchar();
	getchar();
}

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

double SinS(double a, double sna, double snb) //Confirmed
{
	double b;
	b = (a / sin(DegRad(sna))) * sin(DegRad(snb));
	return b;
}

double SinA(double sna, double a, double b) //Confirmed
{
	double ab;
	ab = RadDeg(asin((sin(DegRad(sna)) / a) * b));
	return ab;
}

void MidPt(float x1, float y1, float x2, float y2) //Confirmed
{
	float x, y;
	float ANS[2];
	x = (x1 + x2) / 2;
	y = (y1 + y2) / 2;
	ANS[0] = x;
	ANS[1] = y;
	printf("The MidPt is (%.2f, %.2f)", x, y);
}

double DistPt(double x1, double y1, double x2, double y2) //Confirmed
{
	double ans;
	ans = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return ans;
}

double GradPt(double x1, double y1, double x2, double y2) //Confirmed
{
	double ans;
	ans = (y2 - y1) / (x2 - x1);
	return ans;
}

void AreaPF(void) //Confirmed
{
	int numpoints;
	printf("\nState the number of points in your figure: ");
	scanf_s("%d", &numpoints);
	switch (numpoints)
	{
	case 3:;
		double AreaPF1[3][3], AreaPF1ANS;
		printf("Enter the 3 points: ");
		scanf_s("%lf %lf %lf %lf %lf %lf", &AreaPF1[0][0], &AreaPF1[1][0], &AreaPF1[0][1], &AreaPF1[1][1], &AreaPF1[0][2], &AreaPF1[1][2]);
		AreaPF1ANS = 0.5 * abs((AreaPF1[0][0] * AreaPF1[1][1]) + (AreaPF1[0][1] * AreaPF1[1][2]) + (AreaPF1[0][2] * AreaPF1[1][0]) - (AreaPF1[0][1] * AreaPF1[1][0]) - (AreaPF1[0][2] * AreaPF1[1][1]) - (AreaPF1[0][0] * AreaPF1[1][2]));
		printf("\nThe area of the figure is %.5lf", AreaPF1ANS);
		break;

	case 4:;
		double AreaPF2[4][4], AreaPF2ANS;
		printf("Enter the 4 points: ");
		scanf_s("%lf %lf %lf %lf %lf %lf %lf %lf", &AreaPF2[0][0], &AreaPF2[1][0], &AreaPF2[0][1], &AreaPF2[1][1], &AreaPF2[0][2], &AreaPF2[1][2], &AreaPF2[0][3], &AreaPF2[1][3]);
		AreaPF2ANS = 0.5 * abs((AreaPF2[0][0] * AreaPF2[1][1]) + (AreaPF2[0][1] * AreaPF2[1][2]) + (AreaPF2[0][2] * AreaPF2[1][3]) + (AreaPF2[0][3] * AreaPF2[1][0]) - (AreaPF2[0][1] * AreaPF2[1][0]) - (AreaPF2[0][2] * AreaPF2[1][1]) - (AreaPF2[0][3] * AreaPF2[1][2]) - (AreaPF2[0][0] * AreaPF2[1][3]));
		printf("\nThe area of the figure is %.5lf", AreaPF2ANS);
		break;

	default: printf("\nINVAILD NUMBER!\n");
		getchar();
		getchar();
		break;
	}
}

int menu1(void)
{
	system("cls");
	int cho1;
	printf("Math Formulas Program\n");
	printf("========================\n");
	printf("[1] Trigonometry Formulas.\n");
	printf("[2] Plane Geometry Formulas.\n");
	printf("\nChoice: ");
	scanf_s("%d", &cho1);
	return cho1;
}

int menu2(void)
{
	system("cls");
	int cho2;
	printf("Trigonometry Formulas\n");
	printf("================================\n");
	printf("[1] Degree to Radian Conversion\n");
	printf("[2] Radian to Degree Conversion\n");
	printf("[3] Cosine Formula to find Side\n");
	printf("[4] Cosine Formula to find Angle\n");
	printf("[5] Sine Formula to find Side\n");
	printf("[6] Sine Formula to find Angle\n");
	printf("[7] Go back\n");
	printf("\nChoice: ");
	scanf_s("%d", &cho2);
	return cho2;
}

int menu3(void)
{
	int cho3;
	system("cls");
	printf("Plane Geometry Formulas\n");
	printf("=========================\n");
	printf("[1] Find a MidPoint\n");
	printf("[2] Find the Distance between two points.\n");
	printf("[3] Find the Gradient of two points.\n");
	printf("[4] Area of plane figures.\n");
	printf("[5] Go Back\n");
	printf("\nChoice: ");
	scanf_s("%d", &cho3);
	return cho3;
}