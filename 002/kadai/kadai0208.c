/*****************************************************************************
 * プログラム名 : kadai0208.c
 * 作成 : 2019/06/24 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	char init;
	int old;
	double toller;
	printf("イニシャルは? ");
	scanf("%c", &init);
	printf("年齢は? ");
	scanf("%d", &old);
	printf("身長は? ");
	scanf("%lf", &toller);
	
	printf("イニシャル'%c'のあなたは%d才で身長は%.1lfcm\n", init, old, toller);
}