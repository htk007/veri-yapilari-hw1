#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <List.h>

main() {

	char line[100], *cptr;
	int b, n, p, q; char d;
	List *list1;

	list1 = (List *)malloc(sizeof(List));
	List_initialize(list1);

	List_print(list1); printf("\n\n");
	
	while(1) {

		printf(">> ");
		fgets(line, 100, stdin); 
		cptr = strtok(line, " \n");
		if(!strcmp(cptr, "exit")) { break; }

		if(!strcmp(cptr, "InsertFront")) { 

			cptr = strtok(NULL, " \n"); d = cptr[0];
			List_InsertFront(list1, d); 
		}
	
		if(!strcmp(cptr, "InsertNext")) { 

			cptr = strtok(NULL, " \n"); p = atoi(cptr);
			cptr = strtok(NULL, " \n"); d = cptr[0];
			List_InsertNext(list1, p, d); 
		}

		if(!strcmp(cptr, "Delete")) { 
	
			cptr = strtok(NULL, " \n"); p = atoi(cptr);		
			List_Delete(list1, p); 
		}

		if(!strcmp(cptr, "Front")) { 
		
			p = List_Front(list1);
			printf("ans: %d\n", p); 
		}
	
		if(!strcmp(cptr, "HasFront")) {

			b = List_HasFront(list1);
			printf("ans: %s\n", b?"YES":"NO");
		}
	
		if(!strcmp(cptr, "Next")) { 
	
			cptr = strtok(NULL, " \n"); p = atoi(cptr);			
			q = List_Next(list1, p);
			printf("ans: %d\n", q); 
		}
	
		if(!strcmp(cptr, "HasNext")) {

			cptr = strtok(NULL, " \n"); p = atoi(cptr);			
			b = List_HasNext(list1, p);
			printf("ans: %s\n", b?"YES":"NO");
		}

		if(!strcmp(cptr, "Retrieve")) {

			cptr = strtok(NULL, " \n"); p = atoi(cptr);			
			d = List_Retrieve(list1, p);
			printf("ans: %c\n", d);
		}

		if(!strcmp(cptr, "Update")) { 

			cptr = strtok(NULL, " \n"); p = atoi(cptr);			
			cptr = strtok(NULL, " \n"); d = cptr[0];
			List_Update(list1, p, d); 
		}

		List_print(list1); printf("\n\n");
	}	

	List_finalize(list1);

	return 0;
}
