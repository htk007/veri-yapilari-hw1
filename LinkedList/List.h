#ifndef _LIST_H_
#define _LIST_H_

#define LIST_SIZE 100

/* Data types */
typedef struct memory_data { int occupe[LIST_SIZE]; } Memory;
typedef struct list_data {

	int  front;
	char data[LIST_SIZE];
	int  next[LIST_SIZE];

	Memory memory;
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
int  Memory_New(Memory *memory);
void Memory_Del(Memory *memory, int p);
void Memory_initialize(Memory *memory);

#endif
