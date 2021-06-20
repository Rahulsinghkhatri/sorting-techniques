#include<stdio.h>
void quick_sort(int [],int ,int);
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
    quick_sort(A,0,n-1);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}

void quick_sort(int A[],int LB,int UB)
{
    int i=LB,j=UB,pivot=A[LB],t=0;

    if(LB>=UB)  //Termination condition for recursive call
      return ;
    while (i<j)
    {
        while(pivot>=A[i] && i<j)   //move towards right hand side
           i++;
        while(pivot<A[j])     //move towards left hand side
           j--;
        if(i<j)     //normal swapping of elements
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
    }

    A[LB]=A[j];
    A[j]=pivot;

    quick_sort(A,LB,j-1);  //Recursive call for left partition of array
    quick_sort(A,j+1,UB);  //Recursive call for right partition of array
     
}