#include <stdlib.h>
//Patricio Vargas
//CS 3335
//Fall 2014
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "cl.h"

void *insert(void *cursor, void *name) {
    int i;
	node *p= cursor;
    if (strcmp(p->soldier,"NULL")==0)
	{
        strcpy((p->soldier),(char*)name);
        p->next = cursor;
        return p;
    }
    while (p->next != cursor)
	{
        p = p -> next;
    }
    p->next= (node *) malloc(sizeof(node));
    p= p->next;
    strcpy(p->soldier,(char*)name);
    p->next= cursor;
    return p->next;
}

void *advance(void *cursor)
 {
    node *p= cursor;
    p= p -> next;
    return p;
}

void *release(void *cursor)
 {
    node *p= cursor;
    node *temp;
    temp= p->next;
    p->next= temp->next;
    free(temp);
    return p;
}

void print(void *cursor)
 {
	//int i;
    node *p= cursor;
    printf("%s ",p->soldier);
}
