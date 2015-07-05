#include<stdio.h>
#define FUN(X,Y) X ## Y
#define SECRETFLAG "easypeesy"
//According GCC
int main(void) {
	int SECRET = 1337;
	char *FLAG = "Leet=";
	printf("%s\n",FUN(SECRET,FLAG));
	return 0;
}
/*
	Output : easypeesy
	Reason : In macro function ## simply concatenates give two variable names, so it will become SECRETFLAG
*/
