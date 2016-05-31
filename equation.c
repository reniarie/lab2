#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;
    
	printf("Enter a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%.2lf.\n", x1);
		printf("x2=%.2lf.\n", x2);
	}
	
	if (d == 0)
	{
		x1 = -b / 2 * a;
		printf("x1=x2=%.2lf.\n", x1);
	}
	
    return 0;
}
