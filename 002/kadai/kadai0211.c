/*****************************************************************************
 * プログラム名 : kadai0211.c
 * 作成 : 2019/06/28 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val_a, val_b, val_c;
	int sum;
	double ave;
	printf("1回目の得点は? ");
	scanf("%d", &val_a);
	printf("2回目の得点は? ");
	scanf("%d", &val_b);
	printf("3回目の得点は? ");
	scanf("%d", &val_c);
	
	ave = (double)(sum = val_a + val_b + val_c) / 3.0;
	
	printf(
		"合計点 : %d点\n"
		"平均点 : %.1lf点\n", sum, ave);
}