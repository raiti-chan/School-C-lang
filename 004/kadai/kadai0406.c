/*****************************************************************************
 * プログラム名 : kadai0406.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>
#define true 1
#define false

void main() {
	int input;
	while(1) {
		printf("1 ~ 5 の整数を入力 : ");
		scanf("%d", &input);
		if (0 < input && input < 6) { 
			break;
		}
		printf("入力値が不適切です。正しい値を入力してください。\n");
	}
	
	switch (input) {
		case 1:
			printf("大吉\n");
			break;
		case 2:
			printf("小吉\n");
			break;
		case 3:
			printf("吉\n");
			break;
		case 4:
			printf("凶\n");
			break;
		case 5:
			printf("大凶\n");
			break;
	}
}