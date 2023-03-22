#ifndef A5E1_FIGURAS_H
#define A5E1_FIGURAS_H
#include <iostream>
#include <string>
using namespace std;


class Point{
    float x;
    float y;

public:
    Point();
    //funcao set
    Point(float x_ , float y_);
    float getX();
    float getY();
    friend ostream & operator <<(ostream &os,Point p);
};


class Figura{
protected:
    Point centro;
    string cor;
public:
    Figura();
    Figura(Point centro_,string cor_);
    friend ostream & operator <<(ostream &os,Figura f);
};


class Circle:public Figura{
    float radius;
public:
    Circle();
    Circle(float radius_, Point centro_,string cor_);
    friend ostream & operator <<(ostream &os,Circle c);
    double Area()const;
};

class Rectangle:public Figura{
    float height;
    float width;
public:
    Rectangle();
    Rectangle(float height_, float width_, Point centro_, string cor_);
    friend ostream & operator <<(ostream &os,Rectangle r);
    double Area()const;
};

class Square:public Figura{
    float height;
public:
    Square();
    Square(float height_,Point centro_,string cor_);
    friend ostream & operator <<(ostream &os,Square s);
    double Area()const;
};
#endif
