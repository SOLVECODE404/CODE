#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    int count=0;
    int maxcount=0;
    int idx=0;
    int a[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                count++;
                // idx=j;
                maxcount=count;
            }
            if (maxcount > count)
            {
                printf("%d",a[i]);
            }
        }
        }
    }
    
