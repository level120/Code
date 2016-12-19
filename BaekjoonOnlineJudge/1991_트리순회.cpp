#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

void preorder(vector<queue<char>> tree, char root) {
	printf("%c", root);
	while (tree[root - 65].size() != 0) {
		char next = tree[root - 65].front();
		//printf("next : %c\n", next);
		tree[root - 65].pop();
		if (next == '.')	continue;
		preorder(tree, next);
	}
	return;
}

void inorder(vector<queue<char>> tree, char root) {
	if(tree[root-65].size()==0)
		printf("%c", root);
	while (tree[root - 65].size() != 0) {
		char next = tree[root - 65].front();
		//printf("next : %c\n", next);
		tree[root - 65].pop();
		if (next != '.')	inorder(tree, next);
		printf("%c", root);
		next = tree[root - 65].front();
		//printf("next : %c\n", next);
		tree[root - 65].pop();
		if (next != '.')	inorder(tree, next);
	}
}

void postorder(vector<queue<char>> tree, char root) {
	while (tree[root - 65].size() != 0) {
		char next = tree[root - 65].front();
		//printf("next : %c\n", next);
		tree[root - 65].pop();
		if (next == '.')	continue;
		postorder(tree, next);
	}
	printf("%c", root);
	return;
}

int main() {
	int n;
	scanf("%d\n", &n);
	vector<queue<char>> tree(26);
	while(n--){
		char tmp[3];
		for (int i = 0; i < 3; i++)
			scanf("%c%*c", &tmp[i]);
		for (int i = 1; i < 3; i++)
			tree[tmp[0]-65].push(tmp[i]);
	}
	char root;
	for (int i = 0; i < 26; i++) {
		if (tree[i].size() != 0) {
			root = 65 + i;
			break;
		}
	}
	//printf("root : %c\n", root);
	preorder(tree, root);	puts("");
	inorder(tree, root);	puts("");
	postorder(tree, root);	puts("");
	return 0;
}