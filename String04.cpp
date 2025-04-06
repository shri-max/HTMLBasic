#include<stdio.h>
int main()
{
	char s[5][20];
	int i;
	puts("ENter 5 names");
	for(i=0;i<5;i++){
		 scanf("%s",s[i]);
		
	}
	puts("Names:");
	puts("-------------------------------------------------------------------------------------------");
	for(i=0;i<5;i++) 
   printf("%s\n",s[i]);
}
