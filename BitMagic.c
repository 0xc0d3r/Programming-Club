#include<stdio.h>
#include<string.h>
int main(void) {
	char secret[] = "XORisVERYuseful";
	int i;
	for(i=0;secret[i];i++){
		secret[i] = secret[i]^0x20;
	}
	printf("%s\n",secret);
	return 0;
}
/*
	Output : xorISveryUSEFUL
	Explanation : 
		Given program is for case converter.
		XOR operator( ^ ) just flips the bit. 0x20 => 32 => '0b100000'
		For example, ascii('A') ==> 65 ==> '0b1000001' 5th bit position is off. If we just flip the 5th bit it becomes 97 i.e `a`
*/
