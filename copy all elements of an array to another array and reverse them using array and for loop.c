#include <stdio.h>
int
main ()
{
  int n;
  int a[100];
  int b[100];
  int i;
  int x;
  printf ("enter the array size\n");
  scanf ("%d", &n);
  printf ("input all number %d\n",n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    for (i = 0; i < n; i++)

      {
	//copy all elements of an array to another array
	b[i] = a[i];
      }

    printf("Array:-1\n");
    for (i = 0; i < n; i++)
      {

	printf ("%d\n", a[i]);

      }
      printf("Array:-2\n");
      {
          for (i = n-1;i>=0; i--)

	printf ("%d\n", b[i]);
      }
  return 0;
}

