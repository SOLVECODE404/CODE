// #include <stdio.h>

// int main()
// {
//     int array1[] = {1,2,3,4,5,6,7};
//     int array2[] = {9,4,10,5};
//     int i, j, flag, x, k = 0;
//     int result[100];
//     printf("Common elements are: ");

//     // To traverse in array1.
//     for (i = 0; i < sizeof(array1) / 4; i++)
//     {

//         // To traverse in array2.
//         for (j = 0; j < sizeof(array2) / 4; j++)
//         {

//             // To match elements of array1 with elements of
//             // array2.
//             if (array1[i] == array2[j])
//             {

//                 flag = 0;

//                 // To traverse in result array.
//                 for (x = 0; x < k; x++)
//                 {

//                     // Check whether found element is
//                     // already present in result array or
//                     // not.
//                     if (result[x] == array1[i])
//                     {
//                         flag++;
//                     }
//                 }

//                 // If we found a new element which is common
//                 // in both arrays then store it in result
//                 // array and print it.
//                 if (flag == 0)
//                 {

//                     result[k] = array1[i];
//                     printf("%d ", result[k]);
//                     k++;
//                 }
//             }
//         }
//     }
// }

// C Program To Merge Two Arrays
// using Quaint Methodology
#include <stdio.h>
int main()
{
    int n, rev;
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        rev = rem + rev * 10;
        n /= 10;
    }
    printf("%d", rev);
}
