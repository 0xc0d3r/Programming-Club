#include<stdio.h>
int main(void) {
	static int i = 5;
	printf("%d ",i);
	if(i--){
		main();
	}
	return 0;
}
/*
	Output : 5 4 3 2 1 0
	Explanation :
		static variables retaines its value in function calls
*/