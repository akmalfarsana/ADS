 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node*next;
  6 };
  7 int main(){
  8     struct node*front=NULL;
  9     struct node*rear=NULL;
 10     struct node*newnode,*temp;
 11     int choice,value;
 12     while(1){
 13         printf("\n--Queue using linked list--\n");
 14         printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
 15         printf("Enter your choice:");
 16         scanf("%d",&choice);
 17         switch(choice){
 18             case 1:
 19                 printf("Enter value to Enqueue:");
 20                 scanf("%d",&value);
 21                 newnode=(struct node*)malloc(sizeof(struct node));
 22                 if(newnode==NULL){
 23                     printf("queue is overflow\n");
 24                     break;
 25                 }
 26                 newnode->data=value;
 27                 newnode->next=NULL;
 28                 if(rear==NULL){
 29                     front=rear=newnode;
 30                 }
 31                 else{
 32                     rear->next=newnode;
 33                     rear=newnode;
 34                 }
 35                 printf("%d enqueued to queue\n",value);
 36                 break;
 37             case 2:
 38                 if(front==NULL){
 39                     printf("queue is underflow\n");
 40                     break;
 41                 }
 42                 temp=front;
 43                 printf("%d dequeued from queue\n",front->data);
 44                 front=front->next;
 45                 if(front==NULL)
 46                     rear=NULL;
 47                 free(temp);
 48                 break;
 49             case 3:
 50                 if(front==NULL){
 51                     printf("queue is empty\n");
 52                     break;
 53                 }
 54                 temp=front;
 55                 printf("queue elments:");
 56                 while(temp!=NULL){
 57                     printf("%d->",temp->data);
 58                     temp=temp->next;
 59                 }
 60                 printf("NULL\n");
 61                 break;
 62             case 4:
 63                 exit(0);
 64             default:
 65                 printf("invalid choice!\n");
 66         }
 67     }
 68 return 0;
 69 }



output:


--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter value to Enqueue:2
2 enqueued to queue

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter value to Enqueue:3
3 enqueued to queue

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
queue elments:2->3->NULL

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
2 dequeued from queue

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
queue elments:3->NULL

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
3 dequeued from queue

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
queue is empty

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:5
invalid choice!

--Queue using linked list--
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:4

