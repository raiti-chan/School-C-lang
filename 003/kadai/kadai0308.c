/*****************************************************************************
 * プログラム名 : kadai0308.c
 * 作成 : 2019/07/15 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	char code;
	int is_valid;
	
	printf("キー入力 : ");
	scanf("%c", &code);
	printf("キー有効・無効(1/0) : ");
	scanf("%d", &is_valid);
	if (!is_valid) {
		puts("キー無効モード中");
		return;
	}
	
	switch (code) {
	case '4':
		puts("左に移動");
		break;
	case '6':
		puts("右に移動");
		break;
	case '5':
		puts("攻撃");
		break;
	case '8':
		puts("ジャンプ");
		break;
	case '2':
		puts("しゃがむ");
		break;
	case '7':
		puts("高速で左に移動");
		break;
	case '9':
		puts("高速で右に移動");
		break;
	case '1':
		puts("盾で防御");
		break;
	case '3':
		puts("ハイパワーモード");
		break;
	default:
		puts("謝ったキー");
		break;
	}
}