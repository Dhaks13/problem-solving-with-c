#include <stdio.h>
#include <math.h>

int num, sum;

int find_sum(int number) {
	if (number !=0) {
		return number + find_sum(number - 1);
	} else {
		return number;
	}	
}

int main () {

	printf("Enter number: ");
	scanf("%d", &num);

	int calculated_sum = find_sum(num);
	printf("Sum of numbers: %d\n", calculated_sum);

}
