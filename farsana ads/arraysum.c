 #include<stdio.h>
 int arraysum(int n,int arr[50])
 {
      int i,sum=0;
      for(i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
      return sum;
  }
  int main()
  {
      int i,n,arr[50];
      printf("enter number of elements:");
      scanf("%d",&n);
      printf("enter %d elements:", n);
      for(i=0;i<n;i++)
      {
      scanf("%d",&arr[i]);
      }
      printf("sum=%d",arraysum(n,arr));
  }


output:
enter number of elements:4
enter 4 elements:3
6
8
3
sum=20
