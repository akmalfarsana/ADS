 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node *prev;
  6     struct node *next;
  7 };
  8 struct node *head=NULL;
  9 void insert_begin(){
 10     struct node *newnode;
 11     newnode=(struct node*)malloc(sizeof(struct node));
 12     printf("Enter data:");
 13     scanf("%d",&newnode->data);
 14     newnode->prev=NULL;
 15     newnode->next=head;
 16     if(head!=NULL)
 17         head->prev=newnode;
 18     head=newnode;
 19     printf("node inserted at beginning\n");
 20 }
 21 void insert_end()
 22 {
 23     struct node *newnode,*temp;
 24     newnode=(struct node*)malloc(sizeof(struct node));
 25      printf("Enter data:");
 26      scanf("%d",&newnode->data);
 27      newnode->next=NULL;
 28      if(head==NULL)
 29      {
 30          newnode->prev=NULL;
 31          head=newnode;
 32      }
 33      else
 34      {
 35      temp=head;
 36      while(temp->next!=NULL)
 37          temp=temp->next;
 38      temp->next=newnode;
 39      newnode->prev=temp;
 40      }
 41      printf("node inserted at end .\n");
 42 }
 43 void display_forward(){
 44     struct node *temp=head;
 45     if(head==NULL)
 46     {
 47         printf("List is empty\n");
 48         return;
 49     }
 50     printf("forward list:");
 51     while(temp!=NULL)
 52     {
 53         printf("%d<->",temp->data);
 54         temp=temp->next;
 55     }
 56     printf("NULL\n");
 57 }
 58 void delete_node()
 59 {
 60     struct node *temp=head;
 61     int value;
 62     if(head==NULL)
 63     {
 64         printf("List is empty\n");
 65         return;
 66     }
 67     printf("Enter value to delete:");
 68     scanf("%d",&value);
 69     while(temp!=NULL && temp->data!=value)
 70         temp=temp->next;
 71     if(temp==NULL)
 72     {
 73         printf("Node not found\n");
 74         return;
 75     }
 76     if(temp->prev!=NULL)
 77         temp->prev->next=temp->next;
 78     else
 79         head=temp->next;
 80     if(temp->next!=NULL)
 81         temp->next->prev=temp->prev;
 82     free(temp);
 83     printf("node deleted successfully.\n");
 84 }
 85 void display_reverse()
 86 {
 87     struct node *temp=head;
 88     if(head==NULL)
 89     {
 90         printf("list is empty.\n");
 91         return;
 92     }
 93     while(temp->next!=NULL)
 94         temp=temp->next;
 95     printf("Reverse list:");
 96     while(temp!=NULL)
 97     {
 98         printf("%d<->",temp->data);
 99         temp=temp->prev;
100     }
101     printf("NULL\n");
102 }
103 int main()
104 {
105     int choice;
106         while(1){
107             printf("\n---doubly linked list---\n");
108             printf(" \n1.Insert at beginning\n2.Insert at end\n3.Display forward\n4.Delete a node\n5.Display reverse\n6.Exit");
109             printf("\n Enter choice:");
110             scanf("%d",&choice);
111             switch(choice)
112             {
113                 case 1:
114                     insert_begin();
115                     break;
116                 case 2:
117                     insert_end();
118                     break;
119                 case 3:
120                     display_forward();
121                     break;
122                 case 4:
123                     delete_node();
124                     break;
125                 case 5:
126                     display_reverse();
127                     break;
128                 case 6:
129                     exit(0);
130                 default:
131                     printf("Invalid choice\n");
132             }
133         }
134     return 0;
135 }
