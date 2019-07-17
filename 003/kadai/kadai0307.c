/*****************************************************************************
 * プログラム名 : kadai0307.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int x, y, result = 0;
	char operator;
	
	printf("x 演算子 y の順に入力 : ");
	scanf("%d%c%d", &x, &operator, &y);
	switch (operator) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		puts("演算子が違います");
		return;
	}
	
	printf("%d %c %d = %d\n", x, operator, y, result);
	
}