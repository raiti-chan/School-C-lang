/***************************************************************
 * プログラム名 : Sample1-12.c
 * 作成 : 2019/5/24 小山
 * 内容 : 読み込んだ整数の10倍の値を表示
 ***************************************************************/

#include <stdio.h>

void main() {
	int input;
	printf("整数を入力してください : ");
	scanf("%d", &input);
	
	printf("その10倍は%dです。\n", input * 10);
}