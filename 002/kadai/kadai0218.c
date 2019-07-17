/*****************************************************************************
 * プログラム名 : kadai0218.c
 * 作成 : 2019/06/28 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	double val = 0, input;
	printf("札幌の最高気温 : ");
	scanf("%lf", &input), val += input;
	printf("福島の最高気温 : ");
	scanf("%lf", &input), val += input;
	printf("東京の最高気温 : ");
	scanf("%lf", &input), val += input;
	printf("広島の最高気温 : ");
	scanf("%lf", &input), val += input;
	printf("那覇の最高気温 : ");
	scanf("%lf", &input), val += input;
	
	printf("5つの都市の最高気温の平均値 : %.2lf℃\n", val / 5 + 0.05);
}