/*****************************************************************************
 * プログラム名 : kadai0401.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int i = 1;
	int result = 0, buf;
	while(i <= 3) {
		printf("%d 回目の得点 : ", i);
		scanf("%d", &buf);
		result += buf;
		i++;
	}
	
	printf("合計 : %d 点\n", result);
}