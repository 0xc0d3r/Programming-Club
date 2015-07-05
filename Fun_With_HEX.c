#include<stdio.h>
int main(void) {
	int leet = 0xdeadbeef;
	printf("%#X %X\n",leet,leet);
	return 0;
}
/*

Output : 0XDEADBEEF DEADBEEF
Reason : Capital %X gives capital letters as output(without 0X)

*/
