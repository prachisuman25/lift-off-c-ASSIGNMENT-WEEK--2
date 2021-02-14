#include <stdio.h>
#include <string.h>
int main()
{ char s[100];
int i,count=1;
printf("enter a string:");
gets(s);

for(i=0;s[i]!=0;i++)
{if(s[i]==' ')
count++;
}
printf("no of words:%d", count);
}
