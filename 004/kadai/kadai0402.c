/*****************************************************************************
 * プログラム名 : kadai0402.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int count;
	printf("整数を入力 : ");
	scanf("%d", &count);
	
	while(count > 0) {
		printf("%d\n", count);
		count--;
	}
	
}