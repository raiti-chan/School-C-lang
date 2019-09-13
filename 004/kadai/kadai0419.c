/*****************************************************************************
 * プログラム名 : kadai0419.c
 * 作成 : 2019/09/13 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int money, years;
	double rate;
	
	printf("元金 : ");
	scanf("%d", &money);
	
	printf("利率 : ");
	scanf("%lf", &rate);
	
	printf("年数 : ");
	scanf("%d", &years);
	
	for (int i = 0; i < years; i++) {
		money += money * rate;
	}
	
	printf("%d 年後は %d 円になった\n", years, money);
	
}