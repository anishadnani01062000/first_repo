#include<stdio.h>
int i,n,x,p,r;
int partition(int [],int,int);
int quicksort(int[],int,int);
int main()
{int a[100];
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the elements");
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
quicksort(a,0,n-1);
   for(i=0;i<n;i++)
  {
    printf("%d",a[i]);

  }
  return 0;
}
int quicksort(int a[],int p,int r)
  {
   if(p<r)
    {
    int q;
    q=partition(a,p,r);
    quicksort(a,p,q-1);
    quicksort(a,q+1,r);

    }
  }
int partition(int a[],int p,int r)
{
    int j,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    i=i+1;
    temp=a[i];
    a[i]=a[r];
    a[r]=temp;
    return i;
}


