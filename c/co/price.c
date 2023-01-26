#include <stdio.h>
int main()
{
	int price;
	int bill; 
	printf("please your money(enn): ");
	scanf("%d", &bill);
	printf("Please enter the price(enn): ");
	scanf("%d", &price);

	if (bill >= price) {
		int change = bill - price;

		printf("return your money%d(enn)\n", change);
	}
	else {
		printf("your money not enough!\n");
	}
}
