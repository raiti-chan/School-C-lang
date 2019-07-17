/*****************************************************************************
 * プログラム名 : kadai0311.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	char year;
	int val;
	printf("年号(M,T,S,H) : ");
	scanf("%c", &year);
	printf("年 : ");
	scanf("%d", &val);
	val--;
	int result = 0;
	switch (year) {
	case 'M':
		result = 1868 + val;
		break;
	case 'T':
		result = 1912 + val;
		break;
	case 'S':
		result = 1926 + val;
		break;
	case 'H':
		result = 1989 + val;
		break;
	case 'R':
		result = 2019 + val;
		break;
	default:
		puts("変換できません");
		return;
	}
	
	printf("西暦 %d年\n", result);
}