// File *file -> dekalrimi i nje variable file
// fopen -> per te hapur nje file ne nje variabel te tipit FILE
// fclose -> per te mbyllur nje file ne nje variabel te tipit FILE
// fscanf (file ,structure string, vars ku duam ti ruajm) -> perdoret per te marr vlerat dhe per ti vendosur ne variablat tona
// STRUCTURE STRING :
// fscanf(file, "%c, %d, %lf", character, number,float) -> i tregon te lexoje 3 vlera qe cilat ndahen nga , dhe llojin e seciles prej tyre
// feof(file) -> perdoret per te treguar nese ka arritur ne fundin e file
// ferror(file) -> perdoret per te kapur nese ka ndonje error ne file
// fget/*shenja e te dhenes qe duam te marrim*/: (variabla, madhesia e te dhenes, file)

// SHEMBULL USHTRIMI ME ARRAY DINAMIK

#include <stdio.h>
#include <stdlib.h>  // Librari qe na lejon te perdorim realloc dhe malloc
#include <stdbool.h> // Librari qe na lejon te perdorim type boolean

// #define MORE_LINES 1024 // Sa rreshat duhet te shtojme nese na duhen
// #define MORE_CHARS 1024 // Sa karaktere duhet te shtojme nese na duhen

// int main()
// {
//   FILE *file = fopen("file.txt", "r");
//   if (file == NULL)
//   {
//     printf("Error opening file \n");
//     return 1;
//   }

//   char **lines;
//   lines = malloc(sizeof(char *) * MORE_LINES);

//   size_t total_lines = 0;
//   size_t total_chars = 0;
//   char c;

//   do
//   {
//     c = fgetc(file); // returns the next character in the file

//     if (ferror(file))
//     {
//       printf("Error reading from the file \n");
//       return 1;
//     }

//     if (feof(file))
//     {
//       if (total_chars != 0)
//       {
//         lines[total_lines] = realloc(lines[total_lines], total_chars + 1);
//         lines[total_lines][total_chars] = '\0';
//         total_lines++;
//       }
//       break;
//     }

//     if (total_chars == 0)
//       lines[total_lines] = malloc(MORE_CHARS);

//     lines[total_lines][total_chars] = c;
//     total_chars++;

//     if (c == '\n')
//     {
//       lines[total_lines] = realloc(lines[total_lines], total_chars + 1);
//       lines[total_lines][total_chars] = '\0';
//       total_lines++;
//       total_chars = 0;

//       if (total_lines % MORE_LINES == 0)
//       {
//         size_t new_size = total_lines + MORE_LINES;
//         lines = realloc(lines, sizeof(char *) * new_size);
//       }
//     }
//     else if (total_chars % MORE_CHARS == 0)
//     {
//       size_t new_size = total_chars + MORE_CHARS;
//       lines[total_lines] = realloc(lines[total_lines], sizeof(char *) * new_size);
//     }

//   } while (true);

//   lines = realloc(lines, sizeof(char *) * total_lines);
//   for (size_t i = 0; i < total_lines; i++)
//   {
//     printf("%s", lines[i]);
//   }

//   for (size_t i = 0; i < total_lines; i++)
//   {
//     free(lines[i]);
//   }

//   free(lines);

//   fclose(file);
//   return 0;
// }

int main()
{
  FILE *file = fopen("smallFile.txt", "r");
  if (file == NULL)
  {
    printf("Error reading file \n");
    return 1;
  }

  while (!feof(file))
  {
    char string[100];
    fgets(string, 100, file);
    printf("%s", string);
  }
  fclose(file);
  return 0;
}