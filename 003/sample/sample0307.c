/*****************************************************************************
 * プログラム名 : sample0307.c
 * 作成 : 2019/07/01 小山
 * 内容 : 読み込んだ整数値を3で割った剰余を表示
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val;
	
	printf("整数を入力してください : ");
	scanf("%d", &val);
	
	if (val % 3 == 0) {
		puts("その数は3で割り切れます。");
		return;
	}
	
	printf("その数を3で割った剰余は%dです。\n", val % 3);
	
}