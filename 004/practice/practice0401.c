/*****************************************************************************
 * プログラム名 : practice0401.c
 * 作成 : 2019/07/20 小山
 * 内容 : Rensyu4-1
 ****************************************************************************/

#include <stdio.h>

void main() {
	int count, i = 1;
	
	puts("1以上の整数を入力してください。");
	scanf("%d", &count);
	
	while (i <= count) {
		printf("%d回目の繰り返しです。\n", i);
		i++;
	}
	
	/* for ループ
	
	 for(int i = 1; i <= count; i++) {
		printf("%d回目の繰り返しです。\n", i);
	 }
	 */
	
	puts("繰り返しが終わりました。");
	
}