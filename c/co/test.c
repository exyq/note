#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int times = 0;
	int cai;

	do {
		scanf("%d", &cai);
		times++; 
		if (cai > number)
			printf("large\n");
		else
			printf("smile\n");
		
	} while (cai != number);
	printf("Bingo\n\a"); 
}
