#include <stdio.h>
#include <math.h>

int main() {
	//Declaring the variabled
	char pin[4] = "0098";
	int balance = 10000;
	int error = rand()/100;
	int a=1;

	char pin_entry;
	int transaction_entry;
	
	printf("Welcome to ATM");
	
	while (a=1) {
		printf("Enter your PIN: ");
		scanf("%c", pin_entry);
//comparing the entered pin and correct pin
		if (pin_entry !== pin) {
			printf("Incorrect PIN\n");
			return false;
		}
//getting the value of amount need to be withdraw		
		printf("Enter amount: ");
		scanf("%d", transaction_entry);
//checking whether the amount is less than the balance
		if (transaction_entry > balance) {
			printf("You do not have enough balance\n");
			return false;
		
		printf("transaction in progress...");
		if (error < 20) {
			printf("A transaction error has occured...");
		return false;
		}
	}
		
