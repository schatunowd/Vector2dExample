#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d a1 = {10,10};
	Vector2d a2 = {20, 20};
	cout << "Вектор а1: ";
	a1.print();
	cout << "Вектор а2: ";
	a2.print();
	cout << "Вектор а1, умноженный на число 5,4: ";
	a1.multiplication(5.4);
	cout << "Скалярное произведение векторов а1 и а2: ";
	a1.scalarmultiplication(a2);
}


