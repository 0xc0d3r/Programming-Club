#include<stdio.h>
int fun(){
	int i=10,j=10;
	return i*j;
}
int main(void) {
	int i=2,j=5;
	printf("%d\n",fun(i,j));// fun() will be called and it returns 100; so output is 100
	return 0;
}

/*
	Reason: If you want to write a function without arguments then the prototype looks like <return_type> function_name(void);
*/
