/*
 * Polynomial:
 *  9(x^2)(y^2) - 8x(y^2) + 10xy + 9(y^2)
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int coeff;
    int powX;
    int powY;
    struct node *next;
};

typedef struct node NODE;

void printNode(NODE *node);
void createNode(int coeff, int powX, int powY, NODE **temp);

int main()
{
    NODE *polynomial=NULL;
    //polynomial = (NODE*)malloc(sizeof(NODE));
    createNode(9,2,2, &polynomial);
    createNode(-8,1,2, &polynomial);
    createNode(10,1,1, &polynomial);
    createNode(9,0,2, &polynomial);

    printNode(polynomial);

    free(polynomial);
    return 0;
}

void createNode(int coeff, int powX, int powY, NODE **temp)
{
    NODE *p, *q;
    q=*temp;
    if(q == NULL)
    {
        p=(NODE*)malloc(sizeof(NODE));
        p->coeff = coeff;
        p->powX = powX;
        p->powY = powY;
        *temp = p;
        p->next = (NODE*)malloc(sizeof(NODE));
        p = p->next;
        p->next = NULL;
    }
    else
    {
        p->coeff = coeff;
        p->powX = powX;
        p->powY = powY;
        p->next = (NODE*)malloc(sizeof(NODE));
        p = p->next;
        p->next=NULL;

    }
}

void printNode(NODE *node)
{
    while(node->next!=NULL)
    {
        printf("(%d)(x^%d)(y^%d)", node->coeff, node->powX, node->powY);
        node=node->next;
        if(node->next != NULL)
            printf(" + ");
    }
    printf("\n");
}
