#include<stdio.h>
int main()
{
	int i,table;
	printf("Enter the table you want to print");
	scanf("%d",&table);
	for(i=1;i<=10;i++)
		printf("%dx%d=%d\n",table,i,table*i);
	return 0;
}
