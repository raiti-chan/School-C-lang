/*****************************************************************************
 * プログラム名 : kadai0309.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int count;
	printf("'*'の数(0-5) : ");
	scanf("%d", &count);
	switch (count) {
	case 5:
		printf("*");
	case 4:
		printf("*");
	case 3:
		printf("*");
	case 2:
		printf("*");
	case 1:
		printf("*");
	case 0:
		printf("\n");
		break;
	default:
		puts("入力値が不正です。");
		break;
	}
}