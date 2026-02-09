//Write a program to replace spaces in a string with hyphens

#include<stdio.h>
int main ()
{
	char string[10];
	int i;
	printf("Enter a string");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=' ')
		{
			string[i]='-';
		}
	}
	("The string is:%s", string);
}
