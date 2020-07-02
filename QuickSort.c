#include<stdio.h>
int n=6;
void quicksort(int arr[],int first,int last){
int i,j, pvt , temp ;
if (first < last)
{
    pvt = first;
    i= first;
    j = last;
    int s;
    for ( s=0; s<n; s++)
    {
        printf("%d",arr[s]);
    }
    printf("\n");
    while (i<j)
    {
        while (arr[i]<=arr[pvt]&&i<last)
        {
            i++;
        }
        while (arr[j]>arr[pvt])
        {
            j--;
        }
        if(i<j)
        {
            temp= arr [i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp= arr[pvt];
    arr[pvt]=arr[j];
    arr[j]= temp;
    quicksort(arr,first,j-1);
    quicksort(arr,j+1,last);
}
}
int main(){
    int arr[]= {5,1,6,2,4,3},size = 6, i ;
    quicksort (arr,0,size - 1);
    printf("Quick Sort: ");
    for (i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
