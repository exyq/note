#include <stdio.h>
int main()
{
	printf("Please enter your chi cun: ");
	float chi, cun;
	scanf("%f %f", &chi, &cun);
	float meter = ((chi + cun / 12) * 0.3048); 
	printf("The English is %.4f meter\n", meter);
}
	
