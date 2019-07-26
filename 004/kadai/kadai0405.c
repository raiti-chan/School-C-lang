/*****************************************************************************
 * プログラム名 : kadai0405.c
 * 作成 : 2019/07/26 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int val_x, val_y, i = 0, result = 1;
	printf("x を入力 : ");
	scanf("%d", &val_x);
	printf("y を入力 : ");
	scanf("%d", &val_y);
	
	while(i < val_y) {
		result *= val_x;
		i++;
	}
	
	printf("%d の %d 乗は %d", val_x, val_y, result);
	
}