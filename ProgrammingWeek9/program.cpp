#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>

struct grade
{
	int m;
	int n;
	int p;

};
typedef struct grade gra;
void End();

int main()
{	
	gra a;
	gra b;
	gra c;
	char wel[7] = {'W','e', 'l', 'c', 'o', 'm','e' };
	char x[100];
	char y[100];
	char z[100];
	for (int i = 0; i <= 6; i++)
	{
		printf("%c", wel[i]);
		Sleep(400);
	}

	printf("\n");
	printf("\n");
	printf("Enter text1: ");
	scanf("%s", x);
	printf("Enter text2: ");
	scanf("%s", y);
	printf("Enter text3: ");
	scanf("%s", z);

	printf("\n\n");

	a.m = strlen(x);
	b.n = strlen(y);
	c.p = strlen(z);

	if (a.m > b.n && a.m > b.n)
	{
		printf("%s\n", x);
		if (b.n > c.p)
		{
			printf("%s\n", y);
			printf("%s\n", z);
		}
		else
		{
			printf("%s\n", z);
			printf("%s\n", y);
		}
	}
	if(b.n >c.p && b.n > a.m)
	{
		printf("%s\n", y);
		if (c.p > a.m)
		{
			printf("%s\n", z);
			printf("%s\n", x);
		}
		else
		{
			printf("%s\n", x);
			printf("%s\n", z);
		}
		
	}
	if (c.p > a.m && c.p > b.n)
	{
		printf("%s\n", z);
		if (a.m > b.n)
		{
			printf("%s\n", x);
			printf("%s\n", y);
		}
		else
		{
			printf("%s\n", y);
			printf("%s\n", x);
		}

	}
	printf("\n\n");
	End();
	return 0;
}
void End()
{
	FILE *Fl;
	char text[100];
	Fl = fopen("C:\\Users\\‡§‚√‚√–\\Desktop\\week9.txt","r");

	while (!feof(Fl))
	{
		if (fgets(text, 100, Fl)) {

			printf("%s", text);
			Sleep(400);
		}
		
	}
	fclose(Fl);
	
	
}