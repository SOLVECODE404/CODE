//declaration of array
//intialisation of array
//accesing the array
int arr[5];
int arr[5+5];
int arr[-5];//cannot negative

/* if u wnt to define the length of 
array u should define before the
 implementing the array by cmd
  #define n 10 so that u can
   change later on wheneveer u wnt to
    update the length of array*/ 

//accesing the elements
int main()
{
    int i;
    int n;
    int arr[0]={};
    for (i=0;i<n;i++)
        printf("%d",arr[i]);
}

//define the no of items in array
#include<stdio.h>
int main()
{
    int i;
    int arr[n]={};
    for (i=0;i<n;i++)
        printf("%d",a[i]);
}

//defining the array layout position
int main()
{
    int arr[]={[0]=1,[5]=2};
}
{
    //compiler define the length from 
//the largest index if we wont define it as
// the no of terms is equal to largest +1  }

{//when there is a clash btw a designator 
//and predefined value then the designator 
//would be preferd first   }

//2 d arrays
int a[2][3];
// 3d arrays
int a[2][3][4];

representation of two d __ARRAY
int main()
{
    int a[2][4]={{1,2,3,4},{5,6,7,8}}
}

//representation of 2d array in code
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            {
                printf("%d",a[i][j]);
            }
    }
}




