/*****************************************************************************
 * プログラム名 : extra001.c
 * 作成 : 2019/06/21 小山
 * 内容 : 変数の入れ変え
 ****************************************************************************/
 
 #include <stdio.h>
 
 void main() {
	 int value_a = 1, value_b = 2, value_c = 3;
	 int buf;
	 
	 printf(
		 "領域 a : %d\n"
		 "領域 b : %d\n"
		 "領域 c : %d\n", value_a, value_b, value_c);
	puts("3つを入れ替える");
	buf = value_b;
	value_b = value_a;
	value_a = value_c;
	value_c = buf;
		 printf(
		 "領域 a : %d\n"
		 "領域 b : %d\n"
		 "領域 c : %d\n", value_a, value_b, value_c);
	 
 }