#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &a[i]);
    }

    int i, j, key, k, flag=0;
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
            flag=1;
        }
        a[j + 1] = key;
        if(flag==1){
            for(k=0;k<n;k++){
                printf("%d ",a[k]);
            }
            printf("\n");
            flag=0;
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}