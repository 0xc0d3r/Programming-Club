#include<stdio.h>
//According to GCC
int main(void) {
	
	printf("dontcare\b\b");
	printf("c0ding\r");
	printf("secure\n");
	return 0;
}


/*

Output :  securec0ding
Reason : 
	1st printf statement --> dontca {cursor is still in that line only}
	2nd printf statement --> c0ding {till now output is `dontcac0ding`, \r puts the cursor at start of current line}
	3rd printf statement --> secure {now strlen("secure")=6, so the first 6 characters of intermediate output will be overwritten}
*/

