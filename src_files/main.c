//Patricio Vargas
//CS 3335
//Fall 2014
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cl.h"
#include "node.h"

int main()
{
	char soldiers[600];
    int i,j;
	int count = 0;
	int kill;
    node *begin;
    begin= (node *) malloc(sizeof (node));
    strcpy(begin->soldier,"NULL");
    printf("***********************************************************\n");
    printf("                 The Josephus Problem\n");
    printf("***********************************************************\n");
    printf("Enter name of the  soldierss press Ctrl-D when you are done");
    printf("\n");
    while(scanf("%s",soldiers)!= EOF)
    {
        begin= insert(begin,soldiers);
        ++(count);
    }
    for (j=0;j<count-1;j++)
    {
        begin=advance(begin);
    }
    printf("The brave soldierss are:");
    for (j=0;j<count;j++)
    {
		print(begin);
        begin= advance(begin);
    }
    printf("\n");
    printf("                                                 o     o\n");
    printf("                                                 |    / \n");
    printf("Enter the order you want to kill the soldierss X(--===:\n ");
    printf("                                                |    \\\n");
    printf("                                                 o     o\n");
    scanf("%d",&kill);
    printf("\n");
    for (j=0;j<count;j++)
    {
        for (i=0;i<kill-1;i++)
        {
            begin = advance(begin);
        }
    printf("%d%s%s%s",j,"  ",begin->next->soldier," is dead X(\n");
    printf("\n");
    release(begin);
    }
}

