/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int duplicates(int arr[],int n)
{
       int i=0;
        for(int j=1;j<n;j++)
        {
            if(arr[i] != arr[j])
            {
                i++;
               arr[i]=arr[j]; 
            }
        }
    return i+1;
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int k = duplicates(arr,7);
    for(int i = 0;i<k;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
