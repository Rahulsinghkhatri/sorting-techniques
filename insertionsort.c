#include<stdio.h>
void Insertion_sort(int [],int);
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
    Insertion_sort(A,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}
void Insertion_sort(int A[],int n)
{
    int i,temp,j;

    for(i=1;i<n;i++)
    {
        temp=A[i];  //2nd Element
        j=i-1;    //1st Element

        while(j>=0 && temp<A[j])
        {
            A[j+1]=A[j];
            j=j-1;
        }
        
        A[j+1]=temp;
    }
}