#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
} Node;

Node *GetNewNode(int data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node *Insert(Node *rootPointer, int data)
{
	if (rootPointer == NULL)
	{
		rootPointer = GetNewNode(data);
	}
	else if (data <= rootPointer->data)
	{
		rootPointer->left = Insert(rootPointer->left, data);
	}
	else
	{
		rootPointer->right = Insert(rootPointer->right, data);
	}
	return rootPointer;
}

void Search(Node *rootPointer, int data) // Changed return type from void* to void
{
	if (rootPointer == NULL) // Need to check for NULL pointer
	{
		printf("Data not found!\n");
		return;
	}

	if (data == rootPointer->data)
	{
		printf("Data found!!!!\n");
	}
	else if (data <= rootPointer->data)
	{
		Search(rootPointer->left, data);
	}
	else
	{
		Search(rootPointer->right, data);
	}
}

void FindNegative(Node *rootPointer)
{
	if (rootPointer != NULL)
	{
	}

	FindNegative(rootPointer->left);
	printf("%d \n", rootPointer->data);
	FindNegative(rootPointer->right);
}

void PrintTree(Node *root)
{
	if (root == NULL)
	{
		return;
	}

	printf("%d\n", root->data);

	if (root->left != NULL)
	{
		printf("Left \n");
		PrintTree(root->left);
	}
	if (root->right != NULL)
	{
		printf("Right \n");
		PrintTree(root->right);
	}
}

int main()
{
	Node *rootPointer;
	rootPointer = NULL;
	rootPointer = Insert(rootPointer, -7);
	rootPointer = Insert(rootPointer, 15);
	rootPointer = Insert(rootPointer, 0);
	rootPointer = Insert(rootPointer, -3);
	rootPointer = Insert(rootPointer, 42);
	rootPointer = Insert(rootPointer, 9);

	// Search(rootPointer, 20);
	// Search(rootPointer, 99);
	// InOrder(rootPointer);
	// FindNegative(rootPointer);
	PrintTree(rootPointer);

	return 0;
}