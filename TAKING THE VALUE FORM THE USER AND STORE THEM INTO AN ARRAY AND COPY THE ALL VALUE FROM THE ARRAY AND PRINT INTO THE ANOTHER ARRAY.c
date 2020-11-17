#include <stdio.h>
int
main ()
{
  int i, array1[30], arr2[30];int n;
  printf("HOW MANY NUMBER DO YOU WANT TO INSERT\n");
  //for(i=0;i<=n;i++)
  
      scanf("%d",&n);
       for(i=0;i<n;i++)//this loop for the taking value from the user
       {
           scanf("%d",&array1[i]);
       }
      
  
  printf ("Array 1 is:");
  for (i = 0; i < n; i++)//this loop for the showing the value of the array No.1 which is stored the array

    {
      printf (" %d ", array1[i]);

    }
  printf ("\nArray 2 is :");
  
    for (i = 0; i <n; i++)//this loop used for the store the value of array 1 in to the array 2 
      {
          arr2[i] = array1[i];
  }
  for (i = 0; i < n; i++)//this loop for the showing the value of array 2 
    {
      printf ("%d  ", arr2[i]);
    }

  return 0;
}
