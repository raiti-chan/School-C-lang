/*****************************************************************************
 * プログラム名 : sample0301.c
 * 作成 : 2019/07/01 小山
 * 内容 : 読み込んだ整数値は奇数か
 ****************************************************************************/

#include <stdio.h>

void main() {
	unsigned int val;
	
	printf("1 以上の整数を入力してください : ");
	scanf("%u", &val);
	
	if (! val & 0x00000001) {
		puts("その数は奇数です。");
	}
}