 #include<stdio.h>
  2 int main()
  3 {
  4     int a[5],b[5],c[10];
  5     int i,j,k,temp;
  6     printf("enter 5 elements of first array:\n");
  7     for(i=0;i<5;i++){
  8         scanf("%d",&a[i]);
  9     }
 10     printf("enter 5 elememts of second array");
 11     for(i=0;i<5;i++){
 12         scanf("%d",&b[i]);
 13     }
 14     for(i=0;i<5;i++)
 15     {
 16         for(j=i;j<5;j++)
 17         {
 18             if(a[i]>a[j])
 19             {
 20                 temp=a[i];
 21                 a[i]=a[j];
 22                 a[j]=temp;
 23             }
 24         }
 25     }
 26     for(i=0;i<5;i++)
 27     {
 28         for(j=i+1;j<5;j++)
 29         {
 30             if(b[i]>b[j])
 31             {
 32                 temp=b[i];
 33                 b[i]=b[j];
 34                 b[j]=temp;
 35             }
 36         }
 37     }
 38     i=0;
 39     j=0;
 40     k=0;
 41     while(i<5 && j<5){
 42         if(a[i]<=b[j]){
 43             c[k]=a[i];
 44             i++;
 45         }
 46         else
 47         {
 48             c[k]=b[j];
 49             j++;
 50         }
 51         k++;
 52     }
 53     while(i<5)
 54     {
 55         c[k]=a[i];
 56         i++;
 57         k++;
 58     }
 59     while(j<5)
 60     {
 61         c[k]=b[j];
 62         j++;
 63         k++;
 64     }
 65     printf("mergeed sorted array:\n");
 66     for(i=0;i<10;i++)
 67     {
 68         printf("%d ",c[i]);
 69     }
 70     return 0;
 71 }
