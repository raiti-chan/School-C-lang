/*****************************************************************************
 * プログラム名 : kadai0107.c
 * 作成 : 2019/06/14 小山
 * 内容 : キーボードからの値を掛け算
 ****************************************************************************/
#include <stdio.h>

void main() {
	int val_1, val_2;
	puts("2つの整数を入力してください。");
	printf("整数1 : ");
	scanf("%d", &val_1);

	printf("整数2 : ");
	scanf("%d", &val_2);

	printf("それらの積は%dです。\n", val_1 * val_2);

}