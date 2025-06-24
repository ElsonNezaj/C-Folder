#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	Node *left;	 // Ruan pointer (adresen) e node ne te djathte
	Node *right; // Ruan pointer (adresen) e node ne te majte
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

int main()
{
	struct Node *rootPointer; // Gjithmone duhet te ruajme adresen (pointer) e rrenjes se pemes
	rootPointer = NULL;				// Vendosim pemen si bosh
	Insert(&rootPointer, 15);
	Insert(&rootPointer, 10);
	Insert(&rootPointer, 20);
}