/*****************************************************************************
 * プログラム名 : kadai0108.c
 * 作成 : 2019/06/14 小山
 * 内容 : 三つの入力の和
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val_1, val_2, val_3;

	puts("3つの金額を入力してください。");
	printf("金額1 : ");
	scanf("%d", &val_1);
	printf("金額1 : ");
	scanf("%d", &val_2);	
	printf("金額1 : ");
	scanf("%d", &val_3);
	printf("合計金額は\\%dです。\n", val_1 + val_2 + val_3);
}