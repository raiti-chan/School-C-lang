/*****************************************************************************
 * プログラム名 : kadai0306.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int a_val, b_val;
	printf("Aチームの得点 : ");
	scanf("%d", &a_val);
	
	printf("Bチームの得点 : ");
	scanf("%d", &b_val);
	
	int a_score = 0, b_score = 0;
	
	if (a_val == b_val) {
		a_score += 1;
		b_score += 1;
	} else {
		*(a_val > b_val ? &a_score : &b_score) += 3;
	}
	printf("Aチームの勝点 : %d点\n", a_score);
	printf("Bチームの勝点 : %d点\n", b_score);
	
}