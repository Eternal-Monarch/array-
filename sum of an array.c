
#include <stdio.h>

int
main ()
{ int sum=0;
  int i;
  int arr[5];
  int marks[100];
  for (i = 0; i <= 4; i++)

    scanf ("%d", &arr[i]);
  for (i = 0; i <= 4; i++)
    printf ("%d\n", arr[i]);
    for(i=0;i<=4;i++)
    sum=arr[i]+sum;
    printf (" the sum is %d ", sum);




  return 0;
}
