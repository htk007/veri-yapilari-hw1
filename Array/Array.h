#ifndef _ARRAY_H_
#define _ARRAY_H_

#define ARRAY_SIZE 10

/* Definition */
typedef struct array {

	int n;
	char a[ARRAY_SIZE];
}Array;

/* Operations */
void Array_Insert(Array *array, int x, char d);
void Array_Delete(Array *array, int x);
void Array_Update(Array *array, int x, char d);
char Array_Retrieve(Array *array, int x);
int  Array_Has(Array *array, int x);
int  Array_Count(Array *array);
char Array_Max(Array *array);
int  Array_Find(Array *array, char d);

/* Auxillary methoarray */
void Array_initialize(Array *array);
void Array_finalize(Array *array);
void Array_print(Array *array);

#endif
