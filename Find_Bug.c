#include<stdio.h>
int main() {
	char *res[] = {"Even","Odd"};	//statement1
	int n;							//statement2
	printf("Enter positive integer : ");//statement3
	scanf("%d",&n);					//statement4
	printf("%s\n",res[!(n&1)]);		//statement5
}

/*
	Question :  Which statement need to be changed?
	Answer : 1 or 5
	
	* If you want to change statement1 then the statement will be {"Odd","Even"}
	* If you want to change statement2 then the statement will be res[n&1]
*/