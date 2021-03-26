#include <stdio.h>
 
int main() 
{
	double area, raio, p;
	p = 3.14159;
	
	scanf("%lf", &raio);
	
	area = p * (raio*raio);
	
	printf("A=%.4lf\n", area);
    return 0;
}
