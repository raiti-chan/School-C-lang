/*****************************************************************************
 * プログラム名 : kadai0215.c
 * 作成 : 2019/06/28 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int point = 0, input;
	
	printf("1回目の得点は? ");
	scanf("%d", &input), point += input;
	printf("2回目の得点は? ");
	scanf("%d", &input), point += input;
	printf("3回目の得点は? ");
	scanf("%d", &input), point += input;
	
	printf("3回の合計は %d点です。\n", point);
}