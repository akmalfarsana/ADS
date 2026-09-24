   #include<stdio.h>
   void lgarray()
   {
       int arr[],i,n;
       int max=0;
       printf("enter limit:");
       scanf("%d",&n);
       printf("enter elements:")
       for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
          if(arr[i]>max){
              max=arr[i];
          }
      }
      printf("greatest = ",max);
  }
  void main()
  {

