#include<stdio.h>
#include<string.h>
int main()
{
	char str1[15],str2[15];
	printf("enter a string :");
	scanf("%s",str1);              
	printf("re - enter a string :");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("valid string ..");
	}	
	else
	{
		printf("in valid string ..");
	}
}