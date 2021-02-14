#include <stdio.h>
int main()
{ int i,j,n,c;
printf("enter the value of n:");
scanf("%d", &n);
c = 2*n -1;
for(i=1;i<=c;i++)
{for(j=1;j<=c;j++)
	{if(j==1 || (j==c-i+1))
	printf("*\n");
	else
	printf(" ");}
}
return 0;
}
