#include<stdio.h>
void merge_sort(int [],int ,int );
void merge(int [],int ,int ,int);

// MAIN FUNCTION
int main()
{
    int n,l,r;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    l=0;
    r=n-1;
    int A[n];
    printf("Enter the elememts of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    merge_sort(A,l,r);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}


// FUNCTION FOR MERGE SORT
void merge_sort(int A[],int l,int r)
{
    int mid=0;
    if(l<r)
    {
        mid=(l+r)/2;   // FINFIND MID INDEX
        merge_sort(A,l,mid);   //RECURSIVE CALL
        merge_sort(A,mid+1,r); //RECURSIVE CALL
        merge(A,l,mid,r);
    }
}

//MERGE FUNCTION
void merge(int A[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=A[l+i];
    }
    
    for(int i=0;i<n2;i++)
    {
        b[i]=A[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;   // To traverse main array

    while (i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            A[k]=a[i];
            k++;
            i++;
        }
        else
        {
           A[k]=b[j];
           k++;
           j++; 
        }
    }

     while (i<n1)
    {
            A[k]=a[i];
            k++;
            i++;
    }

    while(j<n2) 
    {
           A[k]=b[j];
           k++;
           j++; 
    } 
    
}