#include<stdio.h>
int main(){
//	char s[100];
//	printf("Enter a String:");
//	scanf("%s",&s);
//	puts("U ENtered string");
//	printf("%s",s);  // Kishore Naidu == Only prints Kishore

 /* char s[100];
  printf("Enter a string");
  gets(s);
   printf("U Entered string - %s",s); // im proud to be an indian output should be an == im proud to be an indian
   puts(s);  // im proud to be an indian output should be an == im proud to be an indian
	  */
	  
	  //Scan Set / Magic Characters
	 /* char s[100];
	  printf("ENter a string:");
	  scanf("%[^\n]",s);
	  printf("U entered");
	  puts(s);    // im proud to be an indian output should be an == im proud to be an indian*/
	  
	   char s[100];
	  printf("Enter a string:");
	  scanf("%[^@#$]",s);
	  printf("U entered");
	  puts(s);
}
