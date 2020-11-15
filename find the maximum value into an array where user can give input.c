
#include <stdio.h>

int
main ()
{
  int n;
  int sum = 0;
  int i;
  int arr[5];
  int marks[100];
  printf ("How many numbers \n");
  scanf ("%d", &n);
  printf ("Enter %d numbers\n", n);
  for (i = 0; i < n; i++)
  scanf ("%d", &arr[i]);
  int max=arr[0];
  for(i=0;i<n;i++)
  {
  if(max<arr[i])
  max=arr[i];
  }
  printf("the maximum value is %d\n",max);
  
   
}
