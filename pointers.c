#include <stdio.h>
#include <stdlib.h>

int main (){
//	int b = 42;
//	int *a = &b; // Make a pointer thats points to an int
//	
//	*a = 50; // Duke i referuar me pointer, tregon qe te perdori vleren qe po i tregon pointer  (*a)
//	
//	printf("%d \n", b);
//	printf("%p \n", &b);
//	printf("%p \n", a);
	
	////////////////////// PASS BY REFRENCE /////////////////////////
	 
//	int x , y;
//	x = 5; 
//	y = 10;
//	swap(&x, &y);

    ////////////////////// DYNAMIC MEMORY ALLOCATION //////////////////////////
    int *a;
    int length = 0;
    printf("Enter a length \n");
    scanf("%d", &length);
    
    a = malloc(length * sizeof(int));
    
    printf("a : %p\n", a);
    
    for (int i = 0; i < length ; i++){
    	a[i] = i;
	}
	
	  for (int i = 0; i < length ; i++){
    	printf("a[%d]=%d\n", i , a[i]);
	}
	
	free(a);
	return 0;
}

 /// PERDORIMI NE FUNKSIONE PASS BY REFERENCE
	
//void swap(int *a, int *b){  // I kalohen adresat e memories se variablave x dhe y
//	int temp = 0;
//	temp = *a; // Derefernce vleren qe ka adresa e memories a
//	*a= *b; // Akeseso vleren qe po ben point a dhe ndryshoje me vleren qe po ben point b
//	*b = temp; // Vendos temp si vlere qe po behet point nga b
//}