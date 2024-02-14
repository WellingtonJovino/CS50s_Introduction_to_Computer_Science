// implements a list of numbers using a linked list

#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    //memory for numbers
    node *list = NULL;

    // for each command- line argument 
    for(int i = 0; i < argc; i++)
    {
        // convert argument to int
        int number = atoi(argv[i]);

        //Allocate node for number
        node *n = malloc(sizeof(node));
        if(n == NULL){
            return 1;
        }
        n->number = number;
        n->next = list;
        list = n;
        }
        node *ptr = list;
        while (ptr != NULL)
        {
            printf("%i\n", ptr->number);
            ptr = ptr->next;
        }
    }
