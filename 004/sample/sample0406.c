/*****************************************************************************
 * プログラム名 : sample0406.c
 * 作成 : 2019/07/19 小山
 * 内容 : do文
 ****************************************************************************/

#include <stdio.h>

void main() {
	int loop;
	int input;
	do {
		printf("整数を入力してください : ");
		scanf("%d", &input);
		if (input % 2){
			puts("その数は奇数です。");
		}
		else{
			puts("その数は偶数です。");
		}
		printf("継続しますか？【Yes…0／No…1】 : ");
		scanf("%d", &loop);
	} while (loop == 0);
}