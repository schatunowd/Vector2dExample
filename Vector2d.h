#pragma once
class Vector2d
{
private:
	double x, y;

public: 
	Vector2d();
	~Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	void setx(double);
	double getx();
	void sety(double);
	double gety();
	void print(void);
	void sum(Vector2d);
	void sub(Vector2d);
	void scalarmultiplication(Vector2d);
	void multiplication(double);
	double length();
	double tg(Vector2d, Vector2d);
	Vector2d operator+(const Vector2d& v) const;
	Vector2d operator-(const Vector2d& v) const;
	double operator*(const Vector2d& v) const;
	Vector2d operator*(const double& v) const;
	Vector2d& operator++();
	Vector2d& operator++(int);
	Vector2d& operator--();
	Vector2d& operator--(int);
	const Vector2d& operator += (const Vector2d& v);
	const Vector2d& operator -= (const Vector2d& v);
	const Vector2d& operator *= (const double& v);
	operator string(void);

};

