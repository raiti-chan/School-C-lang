/*****************************************************************************
 * プログラム名 : Sample2-8.c
 * 作成 : 2019/06/17 小山
 * 内容 : 型と演算について確認するためのプログラム
 ****************************************************************************/

#include <stdio.h>

void main(void)	{
	int i_val_1, i_val_2, i_val_3, i_val_4;
	double d_val_1, d_val_2, d_val_3, d_val_4;
	i_val_1 = 5 / 2;
	i_val_2 = 5.0 / 2.0;
	i_val_3 = 5.0 / 2;
	i_val_4 = 5 / 2.0;
	d_val_1 = 5 / 2;
	d_val_2 = 5.0 / 2.0;
	d_val_3 = 5.0 / 2;
	d_val_4 = 5 / 2.0;
	printf("n1(5/2 の答え) = %d\n", i_val_1);
	printf("n2(5.0/2.0 の答え) = %d\n", i_val_2);
	printf("n3(5.0/2 の答え) = %d\n", i_val_3); 
	printf("n4(5/2.0 の答え) = %d\n\n", i_val_4);
	printf("d1(5/2 の答え) = %f\n", d_val_1);
	printf("d2(5.0/2.0 の答え) = %f\n", d_val_2);
	printf("d3(5.0/2 の答え) = %f\n", d_val_3);
	printf("d4(5/2.0 の答え) = %f\n", d_val_4);
	
}