/*****************************************************************************
 * プログラム名 : practice0402.c
 * 作成 : 2019/07/20 小山
 * 内容 : Rensyu4-2.c
 ****************************************************************************/

#include <stdio.h>

void main() {
	int count;
	
	printf("1以上の整数を入力してください : ");
	scanf("%d", &count);
	
	while (count >= 0) {
		printf("%d\n", count);
		count--;
	}
	
	/* for ループ
	for (; count >= 0; count--) {
		printf("%d\n", count);
	} */
	
}