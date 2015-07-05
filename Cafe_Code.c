#include<stdio.h>
int main(void) {
	int	x = 0xc0de;
	if (x=0xcafe){
		printf("Go to %x\n", x);
	}
	else{
		printf("You must %x well\n", x);
	}
	return 0;
}