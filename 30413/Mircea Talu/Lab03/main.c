#include <stdio.h>
#include <stdlib.h>

FILE *in_file = fopen("latex.in", "r");
FILE *out_file = fopen("latex.out", "w");

typedef struct Data
{
    char word[45];
    int app;
}DataD;

typedef struct node
{
    DataD key;
    int *prev;
    int *next;
}NodeT;

typedef struct list
{
    int count;
    NodeT *first;
    NodeT *last;
}ListT;



int main()
{

    return 0;
}
