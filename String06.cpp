#include<stdio.h>
int main()
{
	char s[100]; int i,v,c,d,spe,spa;
	puts("Enter the String");
	gets(s);
	for(v=c=d=spa=i=0;s[i]!='\0';i++){
		if(s[i]>='a' && s[i]<='z') s[i]-=32;
		
		if(s[i]>='A' && s[i]<='Z'){
		
		if(s[i]=='A'||s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U') v++;
		else c++;
	}
		else if(s[i]>='0' &&s[i]<=9) d++;
		else if(s[i]==' ') spa++;
		else spe++;
	}
	printf("%d vowels, %d consonents , %d digits , %d special character ,%d spaces",v,c,d,spe,spa);
}
