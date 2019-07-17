/*****************************************************************************
 * プログラム名 : sample0306.c
 * 作成 : 2019/07/01 小山
 * 内容 : 読み込んだ整数値が正であれば偶数/奇数の別を判定して表示
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val;
	
	printf("整数を入力してください : ");
	scanf("%d", &val);
	
	if (val < 1) {
		puts("正でない値が入力されました。\a\n");
		return;
	}
	
	if (val % 2 == 0) {
		puts("その数は偶数です。");
	} else {
		puts("その数は奇数です");
	}
}