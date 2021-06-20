#include<stdio.h>
void merge_sort(int [],int);
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
    merge_sort(A,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}

