#include <stdio.h>
int main()
{
	int a, b, c; 
	printf("please enter three num: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (c > a)
			printf("%d is max\n", c);
		else
			printf("%d is max\n", a);
	}
	else {
		if (c > b)
			printf("%d is max\n", c);
		else
			printf("%d is max\n", b);
	}
}
