#include<stdio.h>
int main(void) {
	int a[] = {2,1,3,2,4,3,4};
	int i,xor=0,size = sizeof(a)/sizeof(int);
	printf("%d\n",size);
	for(i=0;i<size;i++){
		xor^=a[i];
	}
	printf("%d\n",xor);
	return 0;
}
