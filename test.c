#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///////////////// USHTRIMI 1 ////////////////////
// int gjejShumen(int vektor[], int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   }

//   return vektor[0] + gjejShumen(vektor + 1, n - 1);
// }

///////////////// USHTRIMI 2 ////////////////////
#define MAX_STUDENTS 200;
#define MAX_NOTA 10;

typedef struct Student
{
  char name[50];
  int nrNotash;
  int *notat;
} Student;

int main()
{
  ///////////////// USHTRIMI 1 ////////////////////

  // int vektor[] = {1, 2, 3, 4, 5};
  // int n = sizeof(vektor) / sizeof(vektor[0]); // gjen size e vektor
  // printf("%d", gjejShumen(vektor, n));

  ///////////////// USHTRIMI 1 ////////////////////

  int i = 0;
  int maxStudents = MAX_STUDENTS;
  FILE *file = fopen("students.txt", "r");
  if (file == NULL)
  {
    printf("Nuk mund te hapej file! \n");
    return 1;
  }
  Student *students;
  students = malloc(maxStudents * sizeof(Student));

  int currentStudentSize, numberOfGradesPerStudent;
  if (fscanf(file, "%d %d", &currentStudentSize, &numberOfGradesPerStudent) != 2)
  {
    printf("Gabim në leximin e dimensioneve.\n");
    fclose(file);
    return 1;
  }

  // Ri-alokojme array e studenteve nese kemi me shum student se maksimalja e definuar
  if (currentStudentSize > maxStudents)
  {
    students = realloc(students, currentStudentSize * sizeof(Student));
  }

  for (int i = 0; i < currentStudentSize; i++)
  {
    char emri[50];
    fscanf(file, "%49[^,]", emri);
    strcpy(students[i].name, emri);

    // Duke qene se cdo student ka madhesi notash dinamike, na duhet te alokojme madhesine ne heap
    students[i].notat = malloc(numberOfGradesPerStudent * sizeof(int));
    if (students[i].notat == NULL)
    {
      printf("Gabim në alokimin e memories për notat e studentit %d.\n", i + 1);
      break;
    }
    students[i].nrNotash = numberOfGradesPerStudent;

    for (int j = 0; j < numberOfGradesPerStudent; j++)
    {
      if (fscanf(file, "%d", &students[i].notat[j]) != 1)
      {
        printf("Gabim ne leximin e notave !\n");
        students[i].nrNotash = j;
        break;
      }
    }
  }

  printf("%d\n", currentStudentSize);
  printf("%d\n", numberOfGradesPerStudent);
  printf("%s\n", students[0].name);

  fclose(file);
  return 0;
}