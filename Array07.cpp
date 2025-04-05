#include<stdio.h>
int main(){
	int a[100],n,i,e,o,z;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (e=o=z=i=0, i=1; i<n;i++)
	{
		if(a[i]==0) z++;
		else if(a[i]%2==0) e++;
		else o++;
	}
	printf("Zeros=%d,Even%d,Odd=%d",z,e,o);
}
