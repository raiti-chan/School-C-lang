/*****************************************************************************
 * プログラム名 : kadai0407.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int start, end, sum = 0;
	printf("start : ");
	scanf("%d", &start);
	printf("end : ");
	scanf("%d", &end);
	
	int i = start;
	while(i <= end) {
		sum += i;
		i++;
	}
	
	printf("%d ~ %d までの和 : %d\n", start, end, sum);
}