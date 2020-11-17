#include <stdio.h>
int
main ()
{
  int i, array1[5] = { 10, 20, 30, 40, 50 }, arr2[5];
  printf ("Array 1 is:");
  for (i = 0; i <= 4; i++)

    {
      printf (" %d ", array1[i]);

    }
  printf ("\nArray 2 is :");
  
    for (i = 0; i <=4; i++)
      {
          arr2[i] = array1[i];
  }
  for (i = 0; i <= 4; i++)
    {
      printf ("%d  ", arr2[i]);
    }


  return 0;
}
