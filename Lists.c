#include <stdio.h>

typedef struct Node
{
  int data;
  struct node *next;
} node;

// KJO ESHTE STRUKTURA BAZE PER TE KRIJUAR NJE STRUKTURE LISTE //

node *createList(int n); // FUNSKION QE KTHEN TYPE TE NODE

node *createList(int n)
{
  int i;
  node *head = NULL; // KRIJON KOKEN E LISTES
  node *temp = NULL; // KRIJON NJE NODE TE PERKOHSHEM QE DO TE RUAJ NODE E RI TE KRIJUAR
  node *p = NULL;    // PERDORET PER TE REFERUAR NJE NODE SPECIFIK NE LISTE

  for (i = 0; i < n; i++)
  {
    temp = (node *)malloc(sizeof(node));
    // PERDORET PER TE KRIJUAR NJE NODE TE RI
    printf("Vendosni vleren per elementin e %d :", i + 1);
    scanf("%d", &(temp->data)); // VENDOS VLEREN DIREKTE NE NODE
    temp->next = NULL;
    if (head == NULL)
    {
      head = temp; // VENDOS ELEMENTIN E PARE TE LISTES
    }
    else
    {
      p = head; // RUHET LISTA PER TE SHMANGUR MODIFIKIMIN DIREKT

      while (p->next != NULL)
      {
        p = p->next;
        // CIKLON LISTEN DERI NE MOMENTIN QE ARRIN NE FUND TE SAJ
      }
      p->next = temp;
      // KUR ARRIN NE FUND TE LISTES, SHTON ELEMENTIN E RI NE FUND TE SAJ
    }
  }

  return head;
  // KTHEN LISTEN E RE TE KRIJUAR
}