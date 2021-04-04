#include<stdio.h>

int main()
{
	double h, w;
	//BMI Calculator
	printf(" Your height in m: ");
	scanf("%lf", &h);
	printf("\n Your weight in kg: ");
	scanf("%lf", &w);
	
	double bmi=w/(h*h);
	printf("\n Your BMI: %.2f", bmi);
	
	return 0;
}
