# multiplication_table
This is a simple program that prints the multiplication table for any given number.

#include<stdio.h><br>
int main()<br>
{<br>
&emsp;	int i,table;<br>
&emsp;	printf("Enter the table you want to print");<br>
&emsp;	scanf("%d",&table);<br>
&emsp;	for(i=1;i<=10;i++)<br>
&emsp;&emsp;		printf("%dx%d=%d\n",table,i,table*i);<br>
&emsp;	return 0;<br>
}<br>
