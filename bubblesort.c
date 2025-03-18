#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<=size-1; ++i)
    {
        scanf("%d",&a[i]);
    }
    
    //bubble sort
    for(int i=1; i<=size-1; ++i)
    {
        for(int j=0; j<=size-i-1;++j)
        {
            if(a[j]>a[j+1])
            {
                //swap(a[j],a[j+1]);
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
        
    }
    //finding product three largest integers
    
    int prod=a[size-1]*a[size-2]*a[size-3];
    printf("%d\n",prod);
    
    //printing the sorted array
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
