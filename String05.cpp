#include<stdio.h>
int main()
{
	char s[100];int i;
	puts("Enter the String");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	}
	printf("Length=%d\n",i);
	printf("Reverse");
	while(i) printf("%c",s[--i]);
}
