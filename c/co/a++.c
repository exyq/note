#include <stdio.h>
int main()
{
	int a = 10;
	printf("a++ = %d\n", a++);
	printf("a = %d\n", a);

	printf("++a = %d\n", ++a);
	printf("a = %d\n", a);
	printf("%d\n", sizeof(a));
	return 0;
}
