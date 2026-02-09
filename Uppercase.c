// Develop a program to convert a string to uppercase using strupr.

#include<stdio.h>
#include<string.h>
int main()
{
	void strupr (char s[]);
	{
		int i;
		for(i=0;s[i]!=0;i++)
		if(s[i]>=97 && s[i]<=122)
		s[i]=s[i]=32;
	}
	int main()
	{
		char str[]="hello world";
		strupr(str);
		printf("%s", str);
	}
}
