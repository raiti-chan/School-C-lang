/***************************************************************
 * プログラム名 : Sample1-7.c
 * 作成 : 2019/5/24 小山
 * 内容 : 警報を３回発する
 *        （実行環境によっては、警報(ビープ音)が鳴らないことや、
 *        ３つの警報が続けて鳴ることで１つに聞こえる場合がある） 
 ***************************************************************/

#include <stdio.h>

void main() {
    printf("こんにちは。\a\a\a\n");
}