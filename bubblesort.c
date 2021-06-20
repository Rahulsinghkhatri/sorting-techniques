#include<stdio.h>
void bubble_sort(int [],int); //function declaration
int main()
{
    int A[100],n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    bubble_sort(A,n);  //function call
    printf("Sorted list in ascending order\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}

void bubble_sort(int A[],int n)  //function definition 
{
    int i,j,temp;

    for ( i = 0; i < (n-1); i++)
    {
        for (int j = 0; j<(n-i-1); j++)
        {
            if(A[j]>A[j+1])
            {
                //swaping
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        
    }
    
}