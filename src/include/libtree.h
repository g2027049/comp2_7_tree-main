#pragma once

// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
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

	// 2���؂̏�����
	void initialize(binary_tree* t);

	// �g�p�������̑S���
	void finalize(binary_tree* t);

	// key�̒l�����ăm�[�h��ǉ�����
	bool add_node(binary_tree*t, int key, const char *value);
	// key�̏����ȏ��ɃR�[���o�b�N�֐�func���Ăяo��
	void serach(const binary_tree *t, void (*func)(const node *p));

	// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
#ifdef __cplusplus
} // extern "C"
#endif