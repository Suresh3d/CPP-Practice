#include <iostream>

using namespace std;


struct tree_node
{
	int data;
	tree_node* left, * right;
};

class BST
{
	tree_node* root;
	void insert(tree_node* node, int d);
	bool search(tree_node* node, int d);
	void inorder(tree_node* node);
	void preorder(tree_node* node);
	void postorder(tree_node* node);

public:
	BST() {
		root = nullptr;
	}
	void insert(int a);
	bool search(int a);
	void inorder();
	void preorder();
	void postorder();
};

void BST::insert(tree_node* node, int d)
{
	if (d < node->data)
	{
		if (node->left != nullptr)
			insert(node->left, d);
		else
		{
			node->left = new tree_node;
			node->left->data = d;
			node->left->left = nullptr;
			node->left->right = nullptr;
		}
	}
	else if (d > node->data)
	{
		if (node->right != nullptr)
			insert(node->right, d);
		else
		{
			node->right = new tree_node;
			node->right->data = d;
			node->right->left = nullptr;
			node->right->right = nullptr;
		}
	}		
}

void BST::insert(int a)
{
	if (root != nullptr)
		insert(root, a);
	else
	{
		root = new tree_node;
		root->data = a;
		root->left = nullptr;
		root->right = nullptr;
	}
}

bool BST::search(tree_node* node, int d)
{
	bool ans = false;

	if (node == nullptr)
		return false;

	if (node->data = d)
		return true;
	else if (d < node->data)
		ans = search(node->left, d);
	else
		ans = search(node->right, d);

	return ans;
}

bool BST::search(int a)
{
	if (root == nullptr)
		return false;
	else
		return search(root, a);
}

void BST::preorder(tree_node* node)
{
	if (node != nullptr)
	{
		cout << node->data << endl;
		preorder(node->left);
		preorder(node->right);
	}
}

void BST::postorder(tree_node* node)
{
	if (node != nullptr)
	{
		postorder(node->left);
		postorder(node->right);
		cout << node->data << endl;
	}
}

void BST::inorder(tree_node* node)
{
	if (node != nullptr)
	{
		inorder(node->left);
		cout << node->data << endl;
		inorder(node->right);
	}
}

void BST::preorder()
{
	if (root == nullptr)
		cout << "Tree is Empty" << endl;
	else
		preorder(root);
}

void BST::postorder()
{
	if (root == nullptr)
		cout << "Tree is Empty" << endl;
	else
		postorder(root);
}

void BST::inorder()
{
	if (root == nullptr)
		cout << "Tree is empty" << endl;
	else
		inorder(root);
}

int main()
{
	BST B;

	B.insert(4);
	B.insert(5);
	B.insert(7);
	B.insert(3);
	B.insert(2);
	B.insert(8);

	B.inorder();

	return 0;
}