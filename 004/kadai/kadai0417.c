/*****************************************************************************
 * プログラム名 : kadai0417.c
 * 作成 : 2019/09/13 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int start, end, sum = 0;
	printf("start : ");
	scanf("%d", &start);
	printf("end : ");
	scanf("%d", &end);
	
	for (int i = start; i <= end; i++) {
		sum += i;
	}
	
	printf("%d ~ %d までの和 : %d\n", start, end, sum);
}