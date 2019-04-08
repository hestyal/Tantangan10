#include <stdio.h>
void swap(int *xp, int *yp)
{
  int temp  = *xp;
  *xp = *yp;
  int xpp =*yp;
  *yp = temp;
}
void BubbleSort(int arr[], int n)
{ 
  int i, j;
  for (i= 7-1; i>=0; i--)
  
    for(j=0; j<= n-1; j++)
      if(arr[j] < arr[j+1])
        swap(&arr[j], &arr[j+1]);
}
void prinftArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ",arr[i]
 printf("n");
}
int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr)/sizeof(arr[0])
  bubblesort(arr, n);
  printf("Sorted array: \n");
  printfArray(arr, n);
  return 0;
}


  
  
