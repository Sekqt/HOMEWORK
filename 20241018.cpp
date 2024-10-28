#include <stdio.h>
#define PI 3.1415926535
void _exchange(int* _A, int* _B);
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

	int __circumference;

	double __ans_1;
	double __ans_2;
	double __ans_3;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("Enter a three-digit number\n");
	scanf_s("%d", &_c);
	_exchange(&a, &b);
	printf("exchange answer : ");
	printf("%d,%d\n", a, b);

	_result = ReverseOrder(_c);

	printf("swap answer: ");
	printf("%d\n", _result);


	//int __circumference;
	scanf_s("%d", &__circumference);
	//double __ans_1;
	//double __ans_2;
	//double __ans_3;
	__ans_1 = CircleCircumference(__circumference);
	__ans_2 = CircleArea(__circumference);
	__ans_3 = BallVolume(__circumference);


	printf("CircleCircumference answer: ");
	printf("%f\n", __ans_1);
	printf("CircleArea answer: ");
	printf("%f\n", __ans_2);
	printf("BallVolume answer: ");
	printf("%f\n", __ans_3);

	return 0;
}

void _exchange(int* _A, int* _B) {
	int temp;
	temp = *_A;
	*_A = *_B;
	*_B = temp;
}

int ReverseOrder(int _A) {
	int _temp;
	int __temp;
	int ___temp;
	_temp = _A / 100;
	__temp = _A % 10;
	___temp = (_A % 100) / 10;

	//printf("%d\n", _temp);
	//printf("%d\n", __temp);
	//printf("%d\n", ___temp);


	return _temp + __temp * 100 + ___temp * 10;
}

int sqrt(int a) {
	return a * a * a;
}



double CircleCircumference(int r) {
	return 2 * PI * r;
}
double CircleArea(int r) {
	return PI * r * r;
}
double BallVolume(int r) {
	return (4 / 3) * PI * sqrt(r);
}