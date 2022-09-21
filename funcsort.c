#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int b)
{
   int i,j,temp;
   for (j=0;j<=b;j++)
    {
      for(i=0;i<=b;i++)
       {
         if (a[i]>a[i+1])
         {
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
          }
        }
    }
   for (j=0;j<=b;j++)
    printf("%d ",a[j]);

}

int main()
{
    int a[7]={4,5,8,9,10,1,3};
    int b=7;
      sort(a,b);



    return 0;
}
