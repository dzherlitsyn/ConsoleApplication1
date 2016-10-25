// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>

/* int ii = 0; // Лекция 2 (примеры и тест)
int& rr = ii;
char str[255];
char alpha[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char g = '1';

int m[3][4] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 }
};

int func(int k, double f);

void incr(int& aa) { aa++; }

char *s4 = "mnbvcx";

int len(char *s)
{
	int n = 0;
	while (*s++)n++;
	return n;
}

void main2()
{
	char *s1;
	char s2[] = "Hello";
	// *s1 = "Hi!";
	// s1[2] = s2[1];
	printf_s("%s", s1);
	// cout << s1;
}


int main()
{
	// 
	rr++;
	
	incr(ii);
	printf_s("char - %i \n", len(alpha));
	printf_s("test int func() - %i %s \n", rr, alpha);
	// scanf_s("%s", str);

	printf_s("%i \n", m[2][3]);
	
	func(0, 0.1);

	char s[] = "abcd1234";
	char *str = s + 4;

	struct { char a; int b; } my_str;


	printf_s("%s %c - \n", str, g);

	main2();

	Sleep(5000);
	return 0;
}

int func(int m, double g = 3.14) { return 0; }; 
*/

int main() // Лекция 3 - примеры и тест
{
	printf_s("test");

	Sleep(5000);
	return 0;
}