#include<stdio.h>
int main(void) {
	int i=1,size_i;
	size_i = sizeof(++i);// no expression is evaluated in `sizeof` operator
	printf("%d %d\n",i,size_i);//output : 1,4 {gcc}
	return 0;
}
