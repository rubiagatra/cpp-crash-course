#include <cstdio>

int step_function(int x) {
	if (x < 0) return -1;
	else if (x > 0) return x;
	else return 0;
}

int main() {
	int num1 = 20;
	int num2 = 0;
	int num3 = -59;

	printf("Num1: %d, Step: %d\n", num1, step_function(num1));
	printf("Num2: %d, Step: %d\n", num2, step_function(num2));
	printf("Num3: %d, Step: %d\n", num3, step_function(num3));
}
