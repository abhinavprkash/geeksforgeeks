#include <stdio.h>
#include <stdlib.h>

struct node
{
        int info;
        struct node *ptr;
}*front, *rear, *temp, *front1;

int count = 0;


int front_element()
{
        if ((front != NULL) && (rear != NULL))
                return (front->info);
        else
                return 0;
}
void EnQue(int data)
{
        if (rear == NULL)
        {
                rear = (struct node *)malloc(1 * sizeof(struct node));
                rear->ptr = NULL;
                rear->info = data;
                front = rear;
        }
        else
        {
                temp = (struct node *)malloc(1 * sizeof(struct node));
                rear->ptr = temp;
                temp->info = data;
                temp->ptr = NULL;

                rear = temp;
        }
        count++;
}
void Dequ()
{
        front1 = front;

        if (front1 == NULL)
        {
                printf("\n Error: Trying to display elements from empty queue");
                return;
        }
        else if (front1->ptr != NULL)
        {
                front1 = front1->ptr;
                printf("\n Dequued value : %d", front->info);
                free(front);
                front = front1;
        }
        else
        {
                printf("\n Dequued value : %d", front->info);
                free(front);
                front = NULL;
                rear = NULL;
        }
        count--;
}
void empty()
{
        if ((front == NULL) && (rear == NULL))
                printf("\n Queue empty");
        else
                printf("Queue not empty");
}
void display()
{
        front1 = front;

        if ((front1 == NULL) && (rear == NULL))
        {
                printf("Queue is empty");
                return;
        }
        while (front1 != rear)
        {
                printf("%d ", front1->info);
                front1 = front1->ptr;
        }
        if (front1 == rear)
                printf("%d", front1->info);
}
void create()
{
        front = rear = NULL;
}

void queuesize()
{
        printf("\n Queue size : %d", count);
}

int main()
{
        int no, ch, e;

        printf("\n 1 - EnQueue");
        printf("\n 2 - Dequue");
        printf("\n 3 - Front element");
        printf("\n 4 - Empty");
        printf("\n 5 - Exit");
        printf("\n 6 - Display");
        printf("\n 7 - Queue size");
        create();
        while (1)
        {
                printf("\n Enter choice : ");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                        printf("Enter data : ");
                        scanf("%d", &no);
                        EnQue(no);
                        break;
                case 2:
                        Dequ();
                        break;
                case 3:
                        e = front_element();
                        if (e != 0)
                                printf("Front element : %d", e);
                        else
                                printf("\n No front element in Queue as queue is empty");
                        break;
                case 4:
                        empty();
                        break;
                case 5:
                        exit(0);
                case 6:
                        display();
                        break;
                case 7:
                        queuesize();
                        break;
                default:
                        printf("Wrong choice, Please enter correct choice  ");
                        break;
                }
        }
        return 0;
}







