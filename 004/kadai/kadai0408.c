/*****************************************************************************
 * プログラム名 : kadai0408.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int input, sum = 0, count = -1;
	do {
		printf("点数を入力 : ");
		scanf("%d", &input);
		sum += input;
		count++;
	} while(input);
	
	printf("%d 回の合計は %d 点\n", count, sum);
	
}