/***************************************************************
 * プログラム名 : Sample1-8.c
 * 作成 : 2019/5/24 小山
 * 内容 : 二つの変数に整数値を格納して表示
 ***************************************************************/

#include <stdio.h>

void main() {
	int value_x, value_y;
	value_x = 57, value_y = value_x + 10;
	
	printf("value_xの値は%dです。\n", value_x);
	printf("value_yの値は%dです。\n", value_y);
}