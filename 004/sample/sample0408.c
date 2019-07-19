/*****************************************************************************
 * プログラム名 : sample0408.c
 * 作成 : 2019/07/19 小山
 * 内容 : do 文
 ****************************************************************************/

#include <stdio.h>

void main() {
	int sum = 0, count = 0,loop, input;
		
	do {
		printf("整数値を入力してください : ");
		scanf("%d", &input);
		sum += input;
		count += 1;
		printf("続けますか？<継続…0/終了…9> : ");
		scanf("%d", &loop);
	} while (loop == 0);
	
	printf("合計は%d で平均は%6.2f です。\n", sum, (double)sum / count); 
}