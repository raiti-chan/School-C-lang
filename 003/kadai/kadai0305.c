/*****************************************************************************
 * プログラム名 : kadai0305.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int a_val, b_val;
	printf("A君のスコア : ");
	scanf("%d", &a_val);
	
	printf("B君のスコア : ");
	scanf("%d", &b_val);
	
	if (a_val == b_val) {
		puts("2人は同点");
		return;
	}
	
	printf("%c君の方がハイスコア\n", a_val < b_val ? 'B' : 'A');
}