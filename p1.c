#include <stdio.h>
#include <math.h>
// floor() 함수가 선언되어 있는 math.h를 포함합니다. 

// floor() 함수의 원형은 다음과 같습니다.

// double floor(double x); 

void main(void)
{
	printf("floor(1.0) : %g \n", floor(1.0));	
	printf("floor(1.1) : %g \n", floor(1.1));	
	printf("floor(1.9) : %g \n", floor(1.9));	
	printf("floor(2.5) : %g \n", floor(2.5));	
	printf("floor(-2.5) : %g \n", floor(-2.5));	
	printf("floor(-3.0) : %g \n", floor(-3.0));
	// 1.1보다 작은 최소의 정수값을 구하려면 floor() 함수를 사용합니다.	
	// 1.1을 넘지 않는 최소의 정수 값을 구하기 때문에 출력값은 1이 됩니다. 
} 