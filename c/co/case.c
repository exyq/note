#include <stdio.h>
int main()
{
	int type; 
	scanf("%d", &type);
	switch (type) {
		case 1:
			printf("hello\n");
			break;
		case 2:
			printf("hi\n");
			break;
		case 3:
			printf("morning\n");
			break;
		default:
			printf("bye\n");
			break;
	}

}
