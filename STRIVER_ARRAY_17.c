/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int maxproduct(int arr[],int n)
{
    int res=arr[0];
    for(int i = 0;i<n-1;i++)
    {
        int ans=arr[i];
        for(int j=i+1;j<n;j++)
        {
            res = max(res,ans);
            ans = ans * arr[j];
        }
        res = max(res,ans);
    }
    return res;
}
int main()
{
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for(int i = 1; i<=n;i++)
//   {
//       scanf("%d",&arr[i]);
//   }
   int arr[]={1,2,-3,0,-4,-5};
   printf("%d",maxproduct(arr,6));

    return 0;
}
