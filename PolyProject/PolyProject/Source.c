#include <stdio.h>
#include "mathf.h"
#include <math.h>
#include <stdlib.h>

//Global Variables
int exitchoice;

//Custom Functions
void backexit(void)
{
	printf("\n\nWould you like to do another caculation?\n");
	printf("[1] Yes   [2] No\n");
	printf("\nChoice: ");
	scanf_s("%d", &exitchoice);
}

//Main Program
void main(void)
{
main1:;
	int cho1;
	printf("Math Formulas Program\n");
	printf("========================\n");
	printf("[1] Trigonometry Formulas.\n");
	printf("[2] Plane Geometry Formulas.\n");
	printf("\nChoice: ");
	scanf_s("%d", &cho1);
	switch (cho1)
	{
	case 1:;
		trig1:
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
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
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
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
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
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
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
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
					}
					break;

			case 5:; double sinsa, sinssina, sinssinb, ans15;
					printf("\nEnter Side A, Sin(A) and Sin(B) (Enter the Angles not the sin vaules): ");
					scanf_s("%lf %lf %lf", &sinsa, &sinssina, &sinssinb);
					ans15 = SinS(sinsa, sinssina, sinssinb);
					printf("\nYour side is %.4lf (units)", ans15);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
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
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						printf("Press Enter to Exit.\n");
						getchar();
						getchar();
					}
					break;

			case 7: printf("\nGoing back to main.\n\n");
					system("pause");
					system("cls");
					goto main1;
					break;

			default: printf("\nINVAILD CHOICE!\n");
					 system("pause");
					 system("cls");
					 goto trig1;
			}
			break;

	case 2:; int cho3;
			system("cls");
			printf("Plane Geometry Formulas\n");
			printf("=========================\n");
			printf("[1] Find a MidPoint\n");
			printf("[2] Find the Distance between two points.\n");
			printf("\nChoice: ");
			scanf_s("%d", &cho3);
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
							goto main1;
						}
						else if (exitchoice == 2)
						{
							printf("\nBye-Bye!\n");
							printf("Press Enter to Exit.\n");
							getchar();
							getchar();
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
							 goto main1;
						 }
						 else if (exitchoice == 2)
						 {
							 printf("\nBye-Bye!\n");
							 printf("Press Enter to Exit.\n");
							 getchar();
							 getchar();
						 }
						 break;


				}
	}
}