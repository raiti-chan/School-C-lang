/*****************************************************************************
 * プログラム名 : kadai0207.c
 * 作成 : 2019/06/24 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	double val_1 = 23.8, val_2 = 13.6, val_3 = 6.3, val_4 = 5.0, val_5 = 4.6;
	printf(
		"第1位　アメリカ    %.1lf%%\n"
		"第2位　中国        %.1lf%%\n"
		"第3位　ロシア      %.1lf%%\n"
		"第4位　日本        %.1lf%%\n"
		"第5位　インド      %.1lf%%\n", val_1, val_2, val_3, val_4, val_5
	);
}