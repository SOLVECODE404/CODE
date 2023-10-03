#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int arr[100];
    int length; scanf("%d", &length);
    int sum; scanf("%d", &sum);
    for(int i = 0; i<length; i++){
        printf("Enter %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<length; i++){
        for(int j = i+1; j<=length; j++){
            if(i != j){
                if(arr[i] + arr[j] == sum){ printf("%d %d\n", arr[i], arr[j]);
            }
        }
        
    }
    }
    return 0;
}