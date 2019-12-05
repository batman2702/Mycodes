#include<stdio.h>
#include<stdlib.h>


struct QNode
{
    int key;
    struct QNode *next;
};

struct Queue
{
    struct QNode *front,*rear;
};

struct QNode *new_node(int num)
{
    struct QNode *temp=(struct QNode*)malloc(sizeof(struct QNode));
    temp->key=num;
    temp->next=NULL;
    return temp;
}

struct Queue* CreateQueue()
{
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->front=q->rear=NULL;
    return q;
}


void enQueue(struct Queue *q,int k)
{
    struct QNode *temp=new_node(k);
    if(q->rear==NULL)
    {
        q->front=q->rear=temp;
        return;
    }
    q->rear->next=temp;
    q->rear=temp;
}



int deQueue(struct Queue *q)
{
    if(q->front==NULL)
    {
    return 0;
    }
    struct QNode *temp = q->front;
    //free(temp);
    q->front=q->front->next;
    int temp2=temp->key;
    free(temp);
    if(q->front==NULL)
    {
        q->rear=NULL;
    }
    return temp2;
}

int main()
{
    struct Queue  *q=CreateQueue();
    int a[7]={10,20,30,40,50,60,70};
    int i;
    for(i=0;i<7;i++)
    {
        enQueue(q,a[i]);
    }
    printf("%d",deQueue(q));
}
