#include<stdio.h>
//According to GCC
int main(void) {
	int i=0,j=10;
	if(i++ && ++j){
		printf("i = %d",i);
	}
	printf("j = %d",j);
	return 0;
}
/*
	Output : j = 10
	Reason : `i` is post incremented so i++ evaluates to 0. So Logical AND(&&) dont check ++j.
*/
