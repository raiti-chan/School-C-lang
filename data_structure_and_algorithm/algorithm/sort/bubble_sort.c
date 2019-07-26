/*****************************************************************************
 * プログラム名 : bubble_sort.c
 * 作成 : 2019/07/26 小山
 * 内容 : バブルソート
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> //動的メモリ確保用のヘッダ

void main() {
	int array_size;
	unsigned long long cost = 0;
	int* array; //* はポインター つまりint型の変数のあるアドレスを格納する変数になる。
	
	printf("配列サイズ(最大2^31) : ");
	scanf("%d", &array_size);
	if (array_size <= 0) {
		printf("配列サイズが無効です。\n");
		return;
	}
	
	array = malloc(sizeof(int) * array_size);
	//動的に配列用のメモリを確保(sizeof(int)はint型のサイズを求める)
	//とりあえず、array_size分の長さの配列を作成したよと捉えてOK
	
	printf("配列を生成しています。(配列サイズによって長くなる場合があります。)\n");
	for (int i = 0; i < array_size; i++) {
		array[i] = rand() % 99;
		printf("%d ,", array[i]);
	}
	
	printf("\nソート中...\n");
	for(int i = array_size - 1; i >= 0; i--) {
		cost += 1;
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {
				int buf = array[j];
				array[j] = array[j + 1];
				array[j + 1] = buf;
			}
			cost += 2;
		}
	}
	
	for (int i = 0; i < array_size; i++) {
		printf("%d ,", array[i]);
	}
	printf("ソート完了。 計算量 : %lld\n", cost);
	
	
	
}