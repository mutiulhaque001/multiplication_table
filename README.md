# multiplication_table
This is a simple program that prints the multiplication table for any given number.

#include<stdio.h><br>
int main()<br>
{<br>
&emsp;	int i,table;<br>
	printf("Enter the table you want to print");<br>
	scanf("%d",&table);<br>
	for(i=1;i<=10;i++)<br>
		printf("%dx%d=%d\n",table,i,table*i);<br>
	return 0;<br>
}<br>
