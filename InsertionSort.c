#include<stdio.h>
int main(){
   int i, j, n = 6, arr[] = {5,1,6,2,4,3};
   int temp;
   for(i=1; i<n; i++)
   {
      int s;
      for(s=0; s<n; s++)
      {
         printf("%d ",arr[s]);
      }
      printf("\n");

      temp = arr[i];
      j = i-1;

      while((temp<arr[j]) && (j>=0))
      {
         arr[j+1] = arr[j];
         j = j-1;
      }
      arr[j+1] = temp;
   }

   printf("Insertion sort: ");
   for(i=0; i<n; i++)
   {
      printf(" %d",arr[i]);
   }

   return 0;
}
