#include<stdio.h>
#include<stdlib.h>

int compare(const void*c,const void*d){
    int x=*(int*)c;
    int y=*(int*)d;
    if(x%2==0 && y%2==0){
        return x-y;
    }
    else if(x%2==0){
        return -1;
    }
    else if(y%2==0){
        return 1;
    }
    else{
        return x-y;
    }
}
int main(){
    int arr[]={4,5,9,2,1,3,6,7,8,};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}