/*****************************************************************************
 * プログラム名 : kadai0415.c
 * 作成 : 2019/09/13 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val_x, val_y, result = 1;
	printf("x を入力 : ");
	scanf("%d", &val_x);
	printf("y を入力 : ");
	scanf("%d", &val_y);
	
	for (int i = 0; i < val_y; i++) {
		result *= val_x;
	}
	
	printf("%d の %d 乗は %d", val_x, val_y, result);
	
}