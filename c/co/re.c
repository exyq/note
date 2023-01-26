#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5, b = 6;
	
	printf("a = %d, b = %d\n", a, b);

	c = a, a = b;
	b = c;

	printf("now a = %d, b = %d\n", a, b);
}
