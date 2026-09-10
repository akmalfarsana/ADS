 #include<stdio.h>
  2 int arraysum(int n,int arr[50])
  3 {
  4     int i,sum=0;
  5     for(i=0;i<n;i++)
  6     {
  7         sum=sum+arr[i];
  8     }
  9     return sum;
 10 }
 11 int main()
 12 {
 13     int i,n,arr[50];
 14     printf("enter number of elements:");
 15     scanf("%d",&n);
 16     printf("enter %d elements:", n);
 17     for(i=0;i<n;i++)
 18     {
 19     scanf("%d",&arr[i]);
 20     }
 21     printf("sum=%d",arraysum(n,arr));
 22 }


output:
enter number of elements:4
enter 4 elements:3
6
8
3
sum=20
