#ifndef _LIST_EXTENDED_H_
#define _LIST_EXTENDED_H_

#include <List.h>

int  List_End(List *list);
int  List_Prev(List *list, int p);
int  List_HasPrev(List *list, int p);
void List_InsertEnd(List *list, char d);
void List_DeleteFront(List *list);
void List_DeleteNext(List *list, int p);
void List_DeleteEnd(List *list);
int  List_Count(List *list);
char List_Kth(List *list, int k);

#endif
