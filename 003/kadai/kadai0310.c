/*****************************************************************************
 * プログラム名 : kadai0310.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val;
	printf("スコアを入力 : ");
	scanf("%d", &val);
	
	if (49 >= val) {
		printf("再トライすべし");
	} else if (59 >= val) {
		printf("努力を要す");
	} else if (79 > val){
		printf("合格");
	} else if (99 > val) {
		printf("期待以上");
	} else {
		printf("大いに優秀");
	}
	
	printf("\n");
}