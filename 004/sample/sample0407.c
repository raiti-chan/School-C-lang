/*****************************************************************************
 * プログラム名 : sample0407.c
 * 作成 : 2019/07/19 小山
 * 内容 : do文
 ****************************************************************************/

#include <stdio.h>

int main() {
	int val;
	do {
		puts("グー・チョキ・パーの数値を入力");
		printf("【0…グー／1…チョキ／2…パー】 : ");
		scanf("%d", &val);
	} while (val < 0 || val > 2);
	
	printf("あなたは");
	
	switch (val) {
	case 0:
		printf("グー");
		break;
	case 1:
		printf("チョキ");
		break;
	case 2:
		printf("パー");
		break;
	default :
		return 1;
	}
	printf("を選びました。\n");
	return 0;
}