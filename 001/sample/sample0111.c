/***************************************************************
 * プログラム名 : sample0111.c
 * 作成 : 2019/5/24 小山
 * 内容 : 読み込んだ整数の値を表示して確認
 ***************************************************************/

#include <stdio.h>

void main() {
	int input;
	printf("整数を入力してください : ");
	scanf("%d", &input);
	
	printf("あなたは%dと入力しましたね。\n", input);
}