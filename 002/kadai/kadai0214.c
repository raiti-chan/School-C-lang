/*****************************************************************************
 * プログラム名 : kadai0214.c
 * 作成 : 2019/06/28 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int all_count, man_count;
	
	printf("クラス全員の人数は? ");
	scanf("%d", &all_count);
	printf("男子の人数は? ");
	scanf("%d", &man_count);
	
	printf(
		"\n"
		"男子の割合は %.1lf%%\n", (double)man_count / (double)all_count * 100.0);
}