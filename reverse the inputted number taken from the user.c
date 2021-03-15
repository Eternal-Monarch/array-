#include<stdio.h>
int main()
{
int a[100];int time;
int i;
printf("how times\n");
scanf("%d",&time);
printf("enter the elements\n",a[i]);
for(i=1;i<=time;i++)
scanf("%d",&a[i]);
printf("the reveresed odered eleements are\n");
for(i=time;i>=1;i--)
printf("%d\n",a[i]);
return 0;
}
