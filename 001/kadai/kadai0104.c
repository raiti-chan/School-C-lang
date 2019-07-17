#include <stdio.h>

void main() {
	int input;
	printf("整数を入力してください : ");
	scanf("%d", &input);
	printf("%d に 12 を加えると %d です。", input, input + 12);
}