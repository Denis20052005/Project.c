#include <stdio.h>

int main() {
	float height;
	double bankBalance;
	long long phoneNumber;
	
	printf("Enter your height: ");
	scanf("%f", &height);
	
	printf("Enter your bank balance: ");
	scanf("%lf", &bankBalance);
	
	printf("Enter your phone number");
	scanf("%lld", &phoneNumber);
	
	printf("height: %.2f\n",height);
	printf("Bank Balance: ksh %2f\n", bankBalance);
	printf("phone Number: %11d\n", phoneNumber);
	
	return 0;
}