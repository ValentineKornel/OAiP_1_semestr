#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("What is your name? ");
	gets_s(name);
	printf("Hello, %s\n\n\n\n", name);
}