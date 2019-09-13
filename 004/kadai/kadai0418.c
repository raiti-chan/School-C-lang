/*****************************************************************************
 * プログラム名 : kadai0418.c
 * 作成 : 2019/09/13 小山
 * 内容 : description
 ****************************************************************************/

#include <stdio.h>

void main() {
	int size, pop_count, pattern_count = 1;
	printf("n : ");
	scanf("%d", &size);
	
	printf("m : ");
	scanf("%d", &pop_count);
	
	
	for (int i = 0; i < pop_count; i++) {
		pattern_count *= size - i;
		pattern_count /= i + 1;
	}
	
	printf("%d 個の中から %d 個取り出す組み合わせは %d 通り\n", size, pop_count, pattern_count);
}