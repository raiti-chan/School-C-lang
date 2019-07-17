/*****************************************************************************
 * プログラム名 : kadai0303.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val;
	printf("得点を入力 : ");
	scanf("%d", &val);
	
	if (150 > val) {
		printf("やり直し");
	} else if (180 > val) {
		printf("普通");
	} else if (200 > val){
		printf("まあまあ");
	} else if (250 > val) {
		printf("期待以上");
	} else {
		printf("優秀");
	}
	
	printf("\n");
}