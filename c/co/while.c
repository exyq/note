#include <stdio.h>
int main()
{
	int x;
	int n = 0;
	scanf("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
		printf("%d %d\n", x, n);
	}
	printf("%d\n", n);
	return 0; 
//	int x;
//	int n = 0;
//	scanf("%d", &x);
//	do {
//		x/=10;
//		n++;
//	} while(x > 0);
//	printf("%d\n", n);
}
