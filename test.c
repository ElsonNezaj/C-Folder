#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
} node;

node *createList(int n);
void displayList(node *head);

int main()
{
  int n;
  node *HEAD = NULL;
  printf("Sa elemente doni ne liste? \n");
  scanf("%d", &n);
  HEAD = createList(n);
  displayList(HEAD);
  return 0;
}

node *createList(int n)
{
  int i;
  node *head = NULL;
  node *temp = NULL;
  node *p = NULL;

  for (i = 0; i < n; i++)
  {
    temp = (node *)malloc(sizeof(node));
    printf("Vendosni vleren per elementin e %d : ", i + 1);
    scanf("%d", &(temp->data));
    temp->next = NULL;

    if (head == NULL)
    {
      head = temp;
    }
    else
    {
      p = head;

      while (p->next != NULL)
      {
        p = p->next;
      }
      p->next = temp;
    }
  }

  return head;
}

void displayList(node *head)
{
  node *p = head;
  while (p != NULL)
  {
    if (p->next != NULL)
    {
      printf("%d -> ", p->data);
    }
    else
    {
      printf("%d", p->data);
    }
    p = p->next;
  }
}