#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Array.h>

main() {

	char line[100], *cptr;
	int x, b, n; char d;

	Array *array1 = (Array *)malloc(sizeof(Array));
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

		Array_print(array1); printf("\n\n");
	}	

	Array_finalize(array1);

	return 0;
}
