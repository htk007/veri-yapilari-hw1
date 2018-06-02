#ifndef _LIST_H_
#define _LIST_H_

#define LIST_SIZE 100

typedef struct list_data {

	int  n;
	char data[LIST_SIZE];
} List;

/* Operations */
void List_InsertFront(List *list, char d);
void List_InsertNext(List *list, int p, char d);
void List_Delete(List *list, int p);
int  List_Front(List *list);
int  List_HasFront(List *list);
int  List_Next(List *list, int p);
int  List_HasNext(List *list, int p);
char List_Retrieve(List *list, int p);
void List_Update(List *list, int p, char d);

/* Auxillary methods */
void List_initialize(List *list);
void List_finalize(List *list);
void List_print(List *list);

#endif
