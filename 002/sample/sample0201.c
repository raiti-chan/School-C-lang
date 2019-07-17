/*****************************************************************************
 * プログラム名 : sample0201.c
 * 作成 : 2019/06/17 小山
 * 内容 : 読み込んだ二つの整数値の和・差・積・商・除算を表示
 ****************************************************************************/

#include <stdio.h>

void main() {
	int value_x, value_y;
	puts("二つの整数を入力してください。");
	printf("整数 x : ");
	scanf("%d", &value_x);
	printf("整数 y : ");
	scanf("%d", &value_y);
	
	printf("value_x + value_y = %d\n", value_x + value_y);
	printf("value_x - value_y = %d\n", value_x - value_y);
	printf("value_x * value_y = %d\n", value_x * value_y);
	printf("value_x / value_y = %d\n", value_x / value_y);
	printf("value_x %% value_y = %d\n", value_x % value_y);

}