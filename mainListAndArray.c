#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <Array.h>
#include <List.h>

List* Array_ToList(Array *array) {

	List *list = (List *)malloc(sizeof(List));
	List_initialize(list);

	int x;
	char d;
	for (x = ARRAY_SIZE-1; x >= 0; --x) {
		if (Array_Has(array, x)) {
			d = Array_Retrieve(array, x);
			List_InsertFront(list, d);
		}
	}

	return list;
}

List* Array_ToSortedList(Array *array) {

	List *list = (List *)malloc(sizeof(List));
	List_initialize(list);

	/* your code here! */

	return list;
}

main() {

	char line[100], *cptr;
	int x, b, n; char d;
	List *list1;
	Array *array1;

	array1 = (Array *)malloc(sizeof(Array));
	Array_initalize(array1);

	Array_print(array1); printf("\n\n");
	
	while(1) {

		printf(">> ");
		fgets(line, 100, stdin); 
		cptr = strtok(line, " \n");
		if(!strcmp(cptr, "exit")) { break; }

		if(!strcmp(cptr, "Insert")) { 

			cptr = strtok(NULL, " \n"); x = atoi(cptr);
			cptr = strtok(NULL, " \n"); d = cptr[0];
			Array_Insert(array1, x, d); 
		}
		
		if(!strcmp(cptr, "Delete")) {

			cptr = strtok(NULL, " \n"); x = atoi(cptr);
			Array_Delete(array1, x);
		}

		if(!strcmp(cptr, "Update")) { 

			cptr = strtok(NULL, " \n"); x = atoi(cptr);
			cptr = strtok(NULL, " \n"); d = cptr[0];
			Array_Update(array1, x, d); 
		}

		if(!strcmp(cptr, "Retrieve")) {

			cptr = strtok(NULL, " \n"); x = atoi(cptr);
			d = Array_Retrieve(array1, x);
			printf("ans: %c\n", d);
		}

		if(!strcmp(cptr, "Has")) {

			cptr = strtok(NULL, " \n"); x = atoi(cptr);
			b = Array_Has(array1, x);
			printf("ans: %s\n", b?"YES":"NO");
		}

		if(!strcmp(cptr, "Count")) {

			n = Array_Count(array1);
			printf("ans: %d\n", n);
		}

		if(!strcmp(cptr, "Max")) {

			/* your code here! */
		}

		if(!strcmp(cptr, "Find")) {

			/* your code here! */
		}

		if(!strcmp(cptr, "ToList")) {

			list1 = Array_ToList(array1);
			List_print(list1);
		}

		if(!strcmp(cptr, "ToSortedList")) {

			list1 = Array_ToSortedList(array1);
			List_print(list1);
		}

		Array_print(array1); printf("\n\n");
	}	

	Array_finalize(array1);

	return 0;
}
