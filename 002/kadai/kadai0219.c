/*****************************************************************************
 * プログラム名 : kadai0219.c
 * 作成 : 2019/06/28 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	char c_val;
	printf("大文字1文字を入力 : ");
	scanf("%c", &c_val);
	printf("'%c'は%d番目\n", c_val , c_val - 'A' + 1);
}