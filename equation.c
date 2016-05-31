#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;
    
	printf("Enter a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	
    return 0;
}
