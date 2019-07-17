/*****************************************************************************
 * プログラム名 : Sample3-08.c
 * 作成 : 2019/07/01 小山
 * 内容 : 読み込んだ整数値を3で割った剰余を表示(Switch文)
 ****************************************************************************/

#include <stdio.h>

void main() {
	unsigned int val, result;
	
	printf("1以上の整数を入力してください。");
	scanf("%u", &val);
	
	result = val % 3;
	switch (result) {
	case 0 : 
		puts("その数は3で割り切れます");
		break;
	case 1 :
		puts("その数を3で割った剰余は1です。");
		break;
	case 2 : 
		puts("その数を3で割った剰余は2です。");
		break;
	default:
		break;
	}
}