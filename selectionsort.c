#include<stdio.h>
void selection_sort(int [],int);
int main()
{
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elememts of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    selection_sort(A,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}

     void selection_sort(int A[],int n)
     {
        int min=0,pos=0;

        for(int i=0;i<n;i++)
        {
           min=A[i];
           pos=i;

           for(int j=i+1;j<n;j++)
           {
            if(A[j]<min)
            {
                min=A[j];
                pos=j;
            }
           }
           if (pos!=i)
           {
            A[pos]=A[i];
            A[i]=min;
           }
        }
     }
     
