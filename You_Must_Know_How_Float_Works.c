#include<stdio.h>
/*
	Specially designed for E3 students who completed COA course.
*/
int main(void) {
	float val1 = 1.4,val2=1.5;
	if(val1 == 1.4){
		printf("Hello");
	}
	else{
		printf("Easy");
	}
	if(val2 == 1.5){
		printf("Peesy");
	}
	else {
		printf("World");
	}
	return 0;
}
/*
	Output : EasyPeesy
	Reason : val1 is float type and "1.4" is double type. You can check sizeof(val) and sizeof(1.4).
			 val2 is float type and "1.5" is double type. You can check sizeof(val) and sizeof(1.5).


	binary representation of val1 : 0000 0001.011001100110
	binary representation of 1.4 : 0000 0001.01100110011001100110

	binary representation of val2 : 0000 0001.100000
	binary representation of 1.5 :  0000 0001.100000000


*/
