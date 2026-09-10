   #include<stdio.h>
  2 void lgarray()
  3 {
  4     int arr[],i,n;
  5     int max=0;
  6     printf("enter limit:");
  7     scanf("%d",&n);
  8     printf("enter elements:")
  9     for(i=0;i<n;i++)
 10     {
 11         scanf("%d",&arr[i]);
 12         if(arr[i]>max){
 13             max=arr[i];
 14         }
 15     }
 16     printf("greatest = ",max);
 17 }
 18 void main()
 19 {

