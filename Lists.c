#include <stdio.h>

typedef struct node
{
  int data;
  struct node *next;
} node;

// KJO ESHTE STRUKTURA BAZE PER TE KRIJUAR NJE STRUKTURE LISTE //

node *createList(int n);                          // FUNSKION QE KTHEN TYPE TE NODE
void addToNode(node **head, int n, int position); // FUNKSION QE SHTON NE LISTE TE NODE NJE ELEMENT NE NJE POZICION TE CAKTUAR

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

void addToNode(node **head, int n, int position)
{
  // Krijimi i nje node te ri qe duam te shotjme tek lista jone
  node *newNode = (node *)malloc(sizeof(node));
  newNode->data = n;
  newNode->next = NULL;

  // Nese pozicioni eshte 0, e shtojme ne fillim te listes
  if (position == 0)
  {
    newNode->next = *head; // Caktojme te gjithe listen pas node te pare
    *head = newNode;       // Caktojme node e ri si node te pare
    return;
  }

  node *current = *head; // Ruajme listen tone aktuale

  // Krijojme nje loop qe nuk ndryshon listen deri ne momentin qe arrijme ne pozicionin tone
  for (int i = 0; current != NULL && i < position < 1; i++)
  {
    current = current->next;
  }

  // Pasi arrijme ne pozicionin tone, cfare ndodhet pas pozicionit tone do te jete adresa per elementin e ri
  newNode->next = current->next;
  current->next = newNode; // Ne piken e caktuar, vendosim elemetin tone te ri
}