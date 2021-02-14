#include <stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("enter the elements:\n");
	for(i=0;i<5;i++)
	{scanf("%d", &a[i]);
	if(a[i]%2==0 || i%2==0)
	sum+=a[i];}
	printf("%d", sum);
}
