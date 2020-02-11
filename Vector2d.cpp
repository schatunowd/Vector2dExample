#include "Vector2d.h"
#include <cmath>
#include <string>

//Конструктор для создания вектора по 2 его координатам.
Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y;
}

//Конструктор для создания вектора по  4 параметрам.
Vector2d::Vector2d(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y= y1 - y0;
}

//Реализация конструктора копирования.
Vector2d::Vector2d(const Vector2d & obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

//Описание set-функций и get-функций для x и y.
void Vector2d::setx(double x)
{
	this->x = x;
}

double Vector2d::getx()
{
	return this->x;
}

void Vector2d::sety(double)
{
	this->y = y;
}

double Vector2d::gety()
{
	return this->y;
}

//Прибавления вектора b к данному вектору.
void Vector2d::sum(Vector2d b)
{
	x = x + b.x;
	y = y + b.y;
}

//Вычитание вектора из исходного.
void Vector2d::sub(Vector2d b)
{
	x = x - b.x;
	y = y - b.y;
}

//Cкалярное умножения вектора на исходный.
void Vector2d::scalarmultiplication(Vector2d b)
{
	x = x * b.x;
	y = y * b.y;
}

//Умножение вектора на число справа
void Vector2d::multiplication(double b)
{
	x = x * b;
	y = y * b;
}

//Определение длины вектора
double Vector2d::length()
{
	return sqrt(pow(x,2) + pow(y,2));
}

//Нахождение тангенса угла между векторами
double Vector2d::tg(Vector2d b, Vector2d a)
{
	double length1 = a.length;
	double length2 = b.length;
	double mul = b.scalarmultiplication;
	double cos = mul / (length1 * length2);
	double sin = sqrt(1 - pow(cos, 2));
	return sin / cos;
}

//Перегрузка операции сложения векторов.
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.x);
}

//Перегрузка операции вычитания векторов.
Vector2d Vector2d::operator-(const Vector2d& v) const
{
	return Vector2d(x - v.x, y - v.x);
}

//Перегрузка операции скалярного произведения векторов.
double Vector2d::operator*(const Vector2d& v) const
{
	return (x * v.x, y * v.y);
}

//Перегрузка операции умножения вектора на число справа.
Vector2d Vector2d::operator*(const double& v) const
{
	return Vector2d(x * v, y * v);
}

//Реализация оператора умножения вне класса
Vector2d operator*(double r, const Vector2d& v)
{
	return Vector2d(r * v.x, r * v.y);
}

//Перегрузка инкремента
Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}

Vector2d& Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

//Перегрузка декремента
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d& Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

//Перегрузка операторов присвоения
const Vector2d& Vector2d::operator+= (const Vector2d& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

const Vector2d& Vector2d::operator-= (const Vector2d& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

const Vector2d& Vector2d::operator*= (const double& v)
{
	x *= v;
	y *= v;
	return *this;
}

//Перегрузка оператора явного преобразования
Vector2d::operator string()
{
    string s = "(" + to_string(x) + to_string(x) + ";" + to_string(y) + ")";
	return s;
}