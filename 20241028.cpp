#include <iostream>
#include <string>

void _exchange(int* _A, int* _B);
int ReverseOrder(int _A);
int sqrt(int a);
double CircleCircumference(int r);
double CircleArea(int r);
double BallVolume(int r);

const double PI = 3.1415926535;


int main(){

    int a,b;
    std::cout << "Please enter two numbers" << std::endl;
    std::cin >> a >> b;
    _exchange(& a,& b);
    std::cout << "exchange answer: " << a << "," << b << std::endl;
    std::cin.clear();

    int _c;
    std::cout << "Enter a three-digit number" << std::endl;
    std::cin >> _c;
    int _result = ReverseOrder(_c);
    std::cout << "swap answer: " << _result << std::endl;
    std::cin.clear();

    int __circumference;
    std::cout << "please enter a number" << std::endl;
    std::cin >> __circumference;
    double __ans_1, __ans_2, __ans_3;
    __ans_1 = CircleCircumference(__circumference);
    __ans_2 = CircleArea(__circumference);
    __ans_3 = BallVolume(__circumference);
    std::cout << "CircleCircumference answer: " << __ans_1 << std::endl;
    std::cout << "CircleArea answer: " << __ans_2 << std::endl;
    std::cout << "BallVolume answer: " << __ans_3 << std::endl;
    std::cin.clear();


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