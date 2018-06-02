#include <stdio.h>
#include <Array.h>

/* Operations */
void Array_Insert(Array *array, int x, char d) {

	array->a[x] = d;
	array->n ++;
}

void Array_Update(Array *array, int x, char d) {

	array->a[x] = d;
}

void Array_Delete(Array *array, int x) {

	array->a[x] = ' ';
	array->n --;
}

char Array_Retrieve(Array *array, int x) {

	return array->a[x];
}

int  Array_Has(Array *array, int x) {

	return (array->a[x] != ' ');
}

int  Array_Count(Array *array) {

	return array->n;
}

/* returns maximum data-value in "array" */
char Array_Max(Array *array) { /* your code here! */ }

/* returns any position in "array" where "d" is present */
int  Array_Find(Array *array, char d) { /* your code here! */ }

/* Auxillary methoarray */
void Array_initalize(Array *array) {

	int i;

	array -> n = 0;
	for(i=0; i<ARRAY_SIZE; i++) { array -> a[i] = ' '; }
}

void Array_finalize(Array *array) {

	/* there is nothing to do */
}

void Array_print(Array *array) {

	int i;
	
	printf(" "); 
	for(i=0; i<ARRAY_SIZE; i++) { printf("_ "); }            
	printf("   ___ \n");
	
	printf("|"); 
	for(i=0; i<ARRAY_SIZE; i++) { printf("%c|", array->a[i]); } 
	printf("  |%2d |\n",array->n);
	
	printf(" "); 
	for(i=0; i<ARRAY_SIZE; i++) { 
	
		if(i/10) { printf("%d ",i/10); }
		else     { printf("%d ",i%10); }        
	}
	printf("    n \n");

	printf(" "); 
	for(i=0; i<ARRAY_SIZE; i++) { 
	
		if(i/10) { printf("%d ",i%10); }
		else     { printf("  "); }        
	}
	printf("      \n");
}
