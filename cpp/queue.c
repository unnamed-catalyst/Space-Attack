#include<stdio.h>
int queue[5];
int rear=-1;
int front=-1;
void insert(int data)
{
    if((rear==4 && front==0) || (front == rear+1))
    {
        printf("Queue is full \n");
        return;
    }
    rear=(rear+1)%5;
    queue[rear]=data;
    if(front==-1)
    {
        front=0;
    }
}
void deletetion()
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Element deleted from queue is : %d \n", queue[front]);

    if(front==rear)
    {
        front=-1;
        rear=1;
    }
    else{
        if(front==4)
        front=0;
        else 
        front = front +1;
    }
}
void display()
{
    int frontmost=front;
    int rearmost=rear;
    if(front==-1){
        printf("Queue is empty!");
        return;
    }
    printf("Queue elements:\n");
    if(frontmost<=rearmost)
       while(frontmost<=rearmost)
       {
           printf("%d ",queue[frontmost]);
           frontmost++;
       }
    
    else
    {
        while(frontmost<=4)
        {
            printf("%d ",queue[frontmost]);
            frontmost++;
        }
        frontmost=0;
        while(frontmost<=rearmost){
            printf("%d ",queue[frontmost]);
            frontmost++;
        }
    }
        printf("\n");        
    }
int main(){
    int choice,data;
    printf("\n Choose option number \n");
    do{
        printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
        printf("Enter your choice : ");
		scanf("%d",&choice);

        switch(choice){
            case 1: printf("Insert data to enter");
		    scanf("%d",&choice);
            insert(data);
            break;

            case 2: deletetion();
            break;

            case 3: display();
            break;

            case 4: break;

            default: printf("Invalid option number \n");
        }
    }while(choice!=4);

    return 0;
    }