 #include<stdio.h>
 int factorial(int n)
 {
     int fact=1;
     for(int i=1;i<=n;i++)
     {
         fact=fact*i;
     }
     return fact;
 }
 int main()
 {
     int n,result;
     printf("Enter a number");
     scanf("%d",&n);
     result=factorial(n);
     printf("factorial=%d",result);
     return 0;
 }


output:
Enter a number5
factorial=120
