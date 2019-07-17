/*****************************************************************************
 * プログラム名 : sample0309.c
 * 作成 : 2019/07/01 小山
 * 内容 : switch文の動作を確認するプログラム
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val;
	scanf("%d", &val);
	
	switch (val) {
	case 1 :
		puts("A");
		puts("B"); 
		break;
	case 2 : 
		puts("C");
		break;
	case 5 : 
		puts("D");
		break;
	case 6 : 
	case 7 : 
		puts("E");
		break;
	default:
		puts("F");
		break;
	}
}