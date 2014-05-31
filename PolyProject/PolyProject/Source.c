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
			case 1:; double deg, ans1;
					printf("\nEnter the Degrees to be Converted: ");
					scanf_s("%lf", &deg);
					ans1 = DegRad(deg);
					printf("%.2lf deg is equal to %lf rad.", deg, ans1);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
					}
					break;

			case 2:; double rad, ans2;
					printf("\nEnter the Radians to Converted: ");
					scanf_s("%lf", &rad);
					ans2 = RadDeg(rad);
					printf("\n.2%lf radians is equal to %lf degrees.", rad, ans2);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
					}
					break;

			case 3:; double cossb, cossc, cosstheta, ans3;
					printf("\nEnter the side b, c and theta in the stated order (only spaces no commas): ");
					scanf_s("%lf %lf %lf", &cossb, &cossc, &cosstheta);
					ans3 = CosS(cossb, cossc, cosstheta);
					printf("\nYour missing side is %.4lf (units)", ans3);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
					}
					break;

			case 4:; double cosaa, cosab, cosac, ans4;
					printf("\nEnter the sides a, b and c as with respect to the formula (only spaces no commas): ");
					scanf_s("%lf %lf %lf", &cosaa, &cosab, &cosac);
					ans4 = CosA(cosaa, cosab, cosac);
					printf("\nYour Angle is %.4lf deg,", &ans4);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
					}
					break;

			case 5:; double sinsa, sinssina, sinssinb, ans5;
					printf("\nEnter Side A, Sin(A) and Sin(B) (Enter the Angles not the sin vaules): ");
					scanf_s("%lf %lf %lf", &sinsa, &sinssina, &sinssinb);
					ans5 = SinS(sinsa, sinssina, sinssinb);
					printf("\nYour side is %.4lf", ans5);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
					}
					break;

			case 6:; double sinasina, sinaa, sinab, ans6;
					printf("\nEnter Sin(A), side A and side B (Enter the angles not the sin value): ");
					scanf_s("%lf %lf %lf", &sinasina, &sinaa, &sinab);
					ans6 = SinA(sinasina, sinaa, sinab);
					printf("\nYour Angle is %.4lf", ans6);
					backexit();
					if (exitchoice == 1)
					{
						system("cls");
						goto main1;
					}
					else if (exitchoice == 2)
					{
						printf("\nBye-Bye!\n");
						system("pause");
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
	}
}