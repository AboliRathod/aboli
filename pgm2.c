/*Module no 2
Assignement no 1
2.IMplementation of stack using linkedlist
*/

/*required header files*/
#include<stdio.h>
#include<stdlib.h>

/*node structure*/
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *top;//*top is created like "struct node"

void push(int value)
{
    node *tmp;//creating an new node
    tmp = malloc(sizeof(node));
    tmp -> data = value;//give value of new node
    tmp -> next = top;//points to the next node
    top = tmp;//points top ptr to tmp node
}

void pop()
{
    node *tmp;//create temp node
    int n;
    tmp = top;//top pointer points to the temp node
    n = tmp->data;//store data of tmp node to variable n
    top = top->next;
    free(tmp);//free the temp node
    printf("\npoped data is:%d\n",n);
   
}

int main()
{
    top=NULL;
    push(10);
    //printf("The top is %d\n",top->data);
    push(20);
    //printf("The top is %d\n",top->data);
    
    pop();
    printf("\nThe top after pop is ...................: %d\n",top->data);
    return 0;
}
