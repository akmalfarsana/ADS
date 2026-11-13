 1 #include<stdio.h>
  2 #define SIZE 5
  3 int queue[SIZE];
  4 int front=-1,rear=-1;
  5 void enqueue(int value){
  6     if((rear+1)%SIZE==front)
  7     {
  8         printf("queue is full(overflow).\n");
  9         return;
 10     }
 11     if(front==-1)
 12         front=0;
 13     rear=(rear+1)%SIZE;
 14     queue[rear]=value;
 15     printf("%d inserted.\n",value);
 16     }
 17 void dequeue()
 18 {
 19     if(front==-1)
 20     {
 21         printf("Queue is empty(underflow).\n");
 22         return;
 23     }
 24     printf("%d deleted.\n",queue[front]);
 25     if(front==rear)
 26         front=rear=-1;
 27     else
 28         front=(front+1)%SIZE;
 29 }
 30 void display()
 31 {
 32     if(front==-1)
 33     {
 34         printf("queue is empty.\n");
 35         return;
 36     }
 37     printf("queue:");
 38     int i=front;
 39     while(1){
 40         printf("%d",queue[i]);
 41         if(i==rear)
 42             break;
 43         i=(i+1)%SIZE;
 44     }
 45     printf("\n");
 46 }
 47 int main()
 48 {
 49     int choice,value;
 50     while(1){
 51         printf("\n---Circular queue---\n");
 52         printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
 53         printf("Enter choice:");
 54         scanf("%d",&choice);
 55         switch(choice){
 56             case 1:
 57                 printf("Enter value to insert:");
 58                 scanf("%d",&value);
 59                 enqueue(value);
 60                 break;
 61             case 2:
 62                 dequeue();
 63                 break;
 64             case 3:
 65                 display();
 66                 break;
 67             case 4:
 68                 return 0;
 69             default:
 70                 printf("Invalid choice.\n");
 71         }
 72     }
 73 }
