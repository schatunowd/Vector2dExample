#include "Vector2d.h"
#include <cmath>
#include <string>

//����������� ��� �������� ������� �� 2 ��� �����������.
Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y;
}

//����������� ��� �������� ������� ��  4 ����������.
Vector2d::Vector2d(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y= y1 - y0;
}

//���������� ������������ �����������.
Vector2d::Vector2d(const Vector2d & obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

//�������� set-������� � get-������� ��� x � y.
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

//����������� ������� b � ������� �������.
void Vector2d::sum(Vector2d b)
{
	x = x + b.x;
	y = y + b.y;
}

//��������� ������� �� ���������.
void Vector2d::sub(Vector2d b)
{
	x = x - b.x;
	y = y - b.y;
}

//C�������� ��������� ������� �� ��������.
void Vector2d::scalarmultiplication(Vector2d b)
{
	x = x * b.x;
	y = y * b.y;
}

//��������� ������� �� ����� ������
void Vector2d::multiplication(double b)
{
	x = x * b;
	y = y * b;
}

//����������� ����� �������
double Vector2d::length()
{
	return sqrt(pow(x,2) + pow(y,2));
}

//���������� �������� ���� ����� ���������
double Vector2d::tg(Vector2d b, Vector2d a)
{
	double length1 = a.length;
	double length2 = b.length;
	double mul = b.scalarmultiplication;
	double cos = mul / (length1 * length2);
	double sin = sqrt(1 - pow(cos, 2));
	return sin / cos;
}

//���������� �������� �������� ��������.
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.x);
}

//���������� �������� ��������� ��������.
Vector2d Vector2d::operator-(const Vector2d& v) const
{
	return Vector2d(x - v.x, y - v.x);
}

//���������� �������� ���������� ������������ ��������.
double Vector2d::operator*(const Vector2d& v) const
{
	return (x * v.x, y * v.y);
}

//���������� �������� ��������� ������� �� ����� ������.
Vector2d Vector2d::operator*(const double& v) const
{
	return Vector2d(x * v, y * v);
}

//���������� ��������� ��������� ��� ������
Vector2d operator*(double r, const Vector2d& v)
{
	return Vector2d(r * v.x, r * v.y);
}

//���������� ����������
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

//���������� ����������
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

//���������� ���������� ����������
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

//���������� ��������� ������ ��������������
Vector2d::operator string()
{
    string s = "(" + to_string(x) + to_string(x) + ";" + to_string(y) + ")";
	return s;
}