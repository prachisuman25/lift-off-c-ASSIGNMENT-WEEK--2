#include <stdio.h>
int main()
{ int i, least,largest;

int a[5];
printf("enter the elements :\n");
for(i=0;i<5;i++)
{scanf("%d", &a[i]);
least=a[0];
if(a[i]<least)
least= a[i];}
printf("least=%d", least);
for(i=0;i<5;i++)
{largest=a[0];
if(a[i]>largest)
largest=a[i];}
printf("\nlargest=%d", largest);
}
