#include<stdio.h>
int main(void) {
	int x = 10;
	int y = (x++,++x);
	printf("%d\n",y);
	return 0;
}


/*
	Output : 12

*/
