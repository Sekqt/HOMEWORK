#include <stdio.h>
#define PI 3.1415926535
void _exchange(int * _A, int * _B);
int ReverseOrder(int _A);
int sqrt(int a);
double CircleCircumference(int r);
double CircleArea(int r);
double BallVolume(int r);


int main() {
	int a;
	int b;
	int _c;
	int _result;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("Enter a three-digit number\n");
	scanf_s("%d", &_c);
	_exchange(&a, &b);
	printf("%d,%d\n", a, b);

	_result = ReverseOrder(_c);
	printf("%d", _result);


	int __circumference;
	scanf_s("%d\n", __circumference);
	int __ans_1;
	int __ans_2;
	int __ans_3;
	__ans_1 = CircleCircumference(__circumference);
	__ans_2 = CircleArea(__circumference);
	__ans_3 = BallVolume(__circumference);

	return 0;
}

void _exchange(int * _A, int * _B) {
	int temp;
	temp = * _A;
	* _A = * _B;
	* _B = temp;
	}

int ReverseOrder(int _A) {
	int _temp;
	int __temp;
	int ___temp;
	_temp = _A / 100;
	__temp = _A % 10;
	___temp = (_A % 100) / 10;

	printf("%d\n", _temp);
	printf("%d\n", __temp);
	printf("%d\n", ___temp);


	return _temp + __temp * 100  + ___temp * 10;
}

int sqrt(int a){
	return a * a * a;
}



double CircleCircumference(int r){
	return 2 * PI * r;
}
double CircleArea(int r){
	return PI * r * r;
}
double BallVolume(int r){
	return (4/3) * PI * sqrt(r);
}