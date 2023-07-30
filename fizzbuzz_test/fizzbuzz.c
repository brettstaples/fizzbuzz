#include <stdio.h>

int main() {
	for(int i = 0; i <= 100; i++) {
		if(((i % 3)||(i % 5))== 0) {
			printf("num = %d FizzBuzz\n", i);
		}
		else if((i % 3)==0) {
			printf("num = %d Fizz\n", i);
		}
		else if((i % 5)==0) {
			printf("num = %d Buzz\n", i);
		}
		else{
			printf("num = %d\n",i);
		}
	}
	
	return 0;
	
}
