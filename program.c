#include <stdio.h>

int main(){
	const int range = 10;
	int sum = 0;

	for(int i =0; i < range; i++){
		if(i % 2 == 0){
			sum += 1;
		}
	}

	printf("The sum of all even numbers smallen than %d is %d.\n", range,sum);
	return 0;

}
