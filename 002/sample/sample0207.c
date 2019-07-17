/*****************************************************************************
 * プログラム名 : sample0207.c
 * 作成 : 2019/06/17 小山
 * 内容 : 二つの実数値を読み込んで和・差・積・商を実数で表示
 ****************************************************************************/

#include <stdio.h>

void main() {
	double value_x, value_y;
	
	puts("二つの実数を入力してください。");
	
	printf("実数 vx : ");
	scanf("%lf", &value_x);
	printf("実数 vy : ");
	scanf("%lf", &value_y);
	
	printf("vx + vy = %f\n", value_x + value_y);
	printf("vx - vy = %f\n", value_x - value_y);
	printf("vx * vy = %f\n", value_x * value_y);
	printf("vx / vy = %f\n", value_x / value_y);
}