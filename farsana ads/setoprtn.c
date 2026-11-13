 #include<stdio.h>
  2 #define SIZE 9
  3 typedef struct{unsigned char x:1;}bit;
  4 const int uset[SIZE]={1,2,3,4,5,6,7,8,9};
  5 void readset(bit a[],int n);
  6 void printset(const bit a[]);
  7 void unionset(const bit a[],const bit b[],bit c[]);
  8 void intersect(const bit a[],const bit b[],bit c[]);
  9 void difference(const bit a[],const bit b[],bit c[]);
 10 int main(void)
 11 {
 12     bit a[SIZE]={{0}},b[SIZE]={{0}},c[SIZE]={{0}};
 13     int n;
 14     printf("Universal set:{1,2,3,4,5,6,7,8,9}\n\n");
 15
 16     printf("no.of elements in set A:");
 17     if(scanf("%d",&n)!=1)return 1;
 18     readset(a,n);
 19
 20     printf("no.of elements in set B:");
 21     if(scanf("%d",&n)!=1)return 1;
 22     readset(b,n);
 23
 24     printf("\nset A:");
 25     printset(a);
 26     printf("set B:");
 27     printset(b);
 28
 29     unionset(a,b,c);
 30     printf("\n\tAUB=");
 31     printset(c);
 32
 33     intersect(a,b,c);
 34     printf("\n\t A intersect B=");
 35     printset(c);
 36
 37     difference(a,b,c);
 38     printf("\n\tA-B=");
 39     printset(c);
 40
 41     return 0;
 42 }
 43 void readset(bit a[],int n)
 44 {
 45     int i,k,x;
 46     if(n<0||n>SIZE)
 47     {
 48         printf("Invalid size;must be between 0 and %d.\n",SIZE);
 49         return;
 50     }
 51     printf("Enter %d elements:",n);
 52     for(i=0;i<n;i++)
 53     {
 54         if(scanf("%d",&x)!=1)return;
 55         for(k=0;k<SIZE;k++)
 56         {
 57             if(uset[k]==x){a[k].x=1;break;}
 58         }
 59         if(k==SIZE)
 60             printf("%d is not in the universal set,ignored.\n",x);
 61     }
 62 }
 63 void printset(const bit a[])
 64 {
 65     int k,first=1;
 66     printf("{");
 67     for(k=0;k<SIZE;k++)
 68     {
 69         if(a[k].x)
 70         {
 71             printf(first?"%d":"%d",uset[k]);
 72             first=0;
 73         }
 74     }
 75     printf("}\n");
 76 }
 77 void unionset(const bit a[],const bit b[],bit c[])
 78 {
 79     for(int k=0;k<SIZE;k++)
 80         c[k].x=a[k].x|b[k].x;
 81 }
 82 void intersect(const bit a[],const bit b[],bit c[])
 83 {
 84     for(int k=0;k<SIZE;k++)
 85         c[k].x=a[k].x&b[k].x;
 86 }
 87 void difference(const bit a[],const bit b[],bit c[])
 88 {
 89     for(int k=0;k<SIZE;k++)
 90         c[k].x=a[k].x&&!b[k].x;
 91 }
