/*****************************************************************************
 * プログラム名 : Sample2-11.c
 * 作成 : 2019/06/17 小山
 * 内容 : 三つの整数値を読み込んで合計値と平均値を表示
 ****************************************************************************/
#include <stdio.h>

void main() {
	int a, b, c;
	int sum;
	double ave;

	puts("三つの整数を入力してください。");
	printf("整数 a : ");
	scanf("%d", &a);
	printf("整数 b : ");
	scanf("%d", &b);
	printf("整数 c : ");
	scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;

	printf(
		"それらの合計は%5dです。\n"
		"それらの平均は%5.1fです。\n", sum, ave);
}