//Develop a program to count occurrences of a specific character in a string

#include<stdio.h>
int main()
{
	int i,count=0;
	char ch,string[100];
	printf("Enter a string");
	gets(string);
	printf("enter a character");
	scanf(" %c", & ch);
	for(i=0;string[i]!=0;i++)
	{
	if(string[i]==ch)
	count++;
}
	printf("specific character in a string is %d",count);
}
