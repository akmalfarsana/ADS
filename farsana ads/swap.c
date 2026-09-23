#include<stdio.h>
  2 void swap(int *a,int *b)
  3 {
  4     int temp;
  5     temp=*a;
  6     *a=*b;
  7     *b=temp;
  8 }
  9 int main()
 10 {
 11     int a,b;
 12     printf("enter first number:");
 13     scanf("%d",&a);
 14    printf("enter second number:");
 15    scanf("%d",&b);
 16    printf("before swapping:\n");
 17    printf("after swapping:\n");
 18    printf("a=%d\n",a);
 19    printf("b=%d\n",b);
 20    swap(&a,&b);
 21    printf("before swapping:\n");
 22    printf("after swapping:\n");
 23    printf("a=%d\n",b);
 24    printf("b=%d\n",a);
 25
 26 return 0;
 27 }



output:-

enter first number:5
enter second number:6
before swapping:
after swapping:
a=5
b=6
before swapping:
after swapping:
a=5
b=6
