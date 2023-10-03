#include<stdio.h>
#include<stdlib.h>

int compare(const void*l,const void*k){
    int x=*(int*)l;
    int y=*(int*)k;
    return x-y;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n;i++){
        printf("a[%d]=%d ",i,arr[i]);
    }
    printf("\n");
}