#include <stdio.h>
int main()
{
   int arr[] = {1,2,3,4,5,6}, x = 6, i, n = 2, f=0;

   int low = 0, high = x-1, mid;

   while (low <= high)
   {
       mid = low+(high-low)/2;
       printf("arr[%d]=%d is equal %d ?\n",mid+1, arr[mid], n);
       if (arr[mid] == n)
       {
         printf("Searched number %d found at position %d.\n",n,mid+1);
         f = 1;
         break;
       }

       if (arr[mid] < n)
       {
         low = mid+1;
       }

       else
       {
         high = mid-1;
       }
   }
   if(f==0)
    {
      printf("Searched number not found!\n");
    }
   return 0;
}
