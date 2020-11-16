#include "Windows.h"                    // Windows API の機能定義
#include <stdbool.h>
#include "../include/libtree.h"

//
// 2分木の初期化
//
void initialize(binary_tree* t)
{
	t->root = NULL;
}

//
// 使用メモリの全解放
//
void finalize(binary_tree* t)
{
}

//
// keyの値を見てノードを追加する
//
bool add_node(binary_tree* t, int key, const char* value)
{
	// todo: ノードを作成して、適切な位置に挿入してください

	return true;
}

//
// keyの小さな順にコールバック関数funcを呼び出す
//
void serach(const binary_tree* t, void (*func)(const node* p))
{
	// todo: keyの小さな順にfunc関数をよびだしてください
	func(t->root);// テストが通ってしまっていたので、通らなくした
}

