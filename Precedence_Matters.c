#include<stdio.h>
#define add(a,b) a+b
//According GCC
int main(void) {
	int i,j,result=0;
	i = 1,2,3;
	j = (1,2,3);
	result = add(i,j) * add(j,i);
	printf("%d\n",result);
	return 0;
}
/*
	Output : 11
	Reason : 
		i = 1
		j = 3
		result = 1 + 3 * 3 + 1 => 11
*/