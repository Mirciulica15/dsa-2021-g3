#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

ListT *listPtr;

// doubly-linked list

int main(int argc, char *argv)
{
    for (int i = 0; i < argc; ++i)
    {
        while(argv[i] != EOF)
        {
            char w[45];
            int c = 0;
            int j = 0;
            while (argv[j] != ' ')
            {
                w[c] = argv[j];
                c++;
                j++;
            }
            /* searching for the node with the same word */
            for(NodeT *q = listPtr->first; q->next != NULL ; q = q->next)
                if(strcmp(q->key->word, w) == 0)
                    q->key->app++;
            /* creating a new node with the key->word = w and app = 1 */
            else
            {
                NodeT *p, q1;
                while(strcmp(w, q1->key->word) == 1)
                    q1 = q1->next;
                p->key->app = 1;
                p->key->word = w;
                p->prev = q1->prev;
                p->next = q1;
                q1->prev = p;
            }
        }

    }

    for(NodeT *x = listPtr->first; x->next != NULL; x = x->next)
        printf("%s : %d", x->key->word, x->key->app);

    fclose(in_file);
    fclose(out_file);
    return 0;
}
