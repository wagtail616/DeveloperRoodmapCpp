#include<iostream>
//定数マクロ
#define PI 3.14159
#define SUARE(x) ((x)*(x))

/*条件付きコンパイル*/
#define DEBUG_MODE
#ifdef DEBUG_MODE

#else

#endif

int main() {
	double radius = 4;
	double circumference = 2 * PI * radius;
	double areaofaCircle = SUARE(radius) * PI;


}