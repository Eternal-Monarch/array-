
#include <stdio.h>

int
main ()
{ int n;
  int sum = 0;
  int i;
  int arr[5];
  int marks[100];
  printf ("How many numbers \n");
  scanf ("%d", &n);
  //for(i=0;i<=n;i++)
  printf("Enter %d numbers\n",n);
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for(i=0;i<n;i++)
   //declare the lopp everytime  before this line 
   sum=sum+arr[i];
   printf("the sum is %d\n",sum);
   printf("the Avarage  is %0.2lf\n",(float)(sum/n));
   return 0;
}
