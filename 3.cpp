#include <stdio.h>


int S[100], top=0;

void push(int e)
{
	S[top++]=e;
}

int pop()
{
	if( top==0 )return 0;
	
	return S[--top];
}

int check(int n)
{
	if( pop()!=n )return 0;
	else return 1;
}

int f()
{
	char ch;
	while(1)
	{
		scanf("%c", &ch);
		if( ch=='\n' )break;
		
		if( ch=='(' )push(1);
		else if( ch=='[' )push(2);
		else if( ch=='{' )push(3);
		else if( ch==')' )
		{
			if( check(1)==0 )
				return 0;
		}
		else if( ch==']' )
		{
			if( check(2)==0 )
				return 0;
		}
		else if( ch=='}' )
		{
			if( check(3)==0 )
				return 0;
		}
	}
	
	if( top==0 )return 1;
	else return 0;
}

int main()
{
	if( f()==1 )printf("ture");
	else printf("false");
	
	return 0;
}

