#pragma once

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif

	typedef struct node {
		int key;
		char value[256];
		struct node* left;
		struct node* right;
	}node;

	typedef struct binary_tree {
		node* root;
	}binary_tree;

	// 2分木の初期化
	void initialize(binary_tree* t);

	// 使用メモリの全解放
	void finalize(binary_tree* t);

	// keyの値を見てノードを追加する
	bool add_node(binary_tree*t, int key, const char *value);
	// keyの小さな順にコールバック関数funcを呼び出す
	void serach(const binary_tree *t, void (*func)(const node *p));

	// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif