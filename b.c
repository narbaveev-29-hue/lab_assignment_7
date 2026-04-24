#include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the number of items : ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the price of the item : ");
        scanf("%d", &a[i]);
    }

    int i, j, k, min, temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
                flag=1;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        if(flag==1){
            for(k=0;k<n;k++){
                printf("%d ",a[k]);
            }
            printf("\n");
            flag=0;
        }
    }
    printf("The item's price in ascending order is : ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}