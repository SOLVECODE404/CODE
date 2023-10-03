#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of:");
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    printf("Enter the size of new array:");
    int m;
    scanf("%d",&m);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<m;i++){
        printf("Enter the value of:");
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<m;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
}