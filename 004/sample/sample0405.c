/*****************************************************************************
 * プログラム名 : sample0405.c
 * 作成 : 2019/07/19 小山
 * 内容 : while文
 ****************************************************************************/

#include <stdio.h>

void main() {
	int i = 0, result = 0, count, input;
	
	printf("何個入力しますか : ");
	scanf("%d", &count);
	
	while (i < count) {
		i++;
		printf("No.%d : ",i);
		scanf("%d", &input);
		result += input;
	}
	
	printf("合計値 : %d\n", result);
	printf("平均値 : %7.2f\n", (double)result / count); 

}