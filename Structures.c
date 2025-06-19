#include <stdio.h>
#include <string.h>

struct Student
{
  char name[50];
  int student_id;
  int marks[5];
};

int main()
{
  int size;
  int i = 0;
  printf("Sa studente doni te deklaroni ? \n");
  scanf("%d", &size);
  struct Student studenta[size];

  for (i = 0; i < size; i++)
  {
    char emri[50];
    printf("Emri i studentit %d : ", i + 1);
    scanf("%s", emri);
    strcpy(studenta[i].name, emri);
    printf("ID e %s : ", emri);
    scanf("%d", &studenta[i].student_id);

    int j = 0;
    for (j = 0; j < 5; j++)
    {
      printf("Jepni noten e %d : ", j + 1);
      scanf("%d", &studenta[i].marks[j]);
    }
  }

  printf("Emri i pare %s", studenta[0].name);
  printf("Emri i dyte %s", studenta[1].name);

  return 0;
}