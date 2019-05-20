#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void name(int count,...){
	va_list ap;
	va_start(ap,count);
	int a = va_arg(ap,int);
	printf("%d ",a);
	a = va_arg(ap,int);
	printf("%d ",a);
	double d = va_arg(ap,double);
	printf("%f ",d);
	a = va_arg(ap,int);
	printf("%d \n",a);
}	

int main()
{
	name(4,1,2,3.1415926,4);
	return EXIT_SUCCESS;
}
