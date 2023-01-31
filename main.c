
#include<stdio.h>
#include<conio.h>

int main()
{
	 char ch;
	 clrscr();
	 printf("Enter any character: ");
	 scanf("%c", &ch);
	 printf("ASCII value of %c is %d", ch, ch);
	 getch();
	 return(0);
}
