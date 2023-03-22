#include "figuras.h"
//atribuir o valor 0
Point::Point(): x(0) , y(0){
}
//definir os valores de x a x e y a y
//funcao set
Point::Point(float x_, float y_):x(x_),y(y_){
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}
//posso usar p.x pois a class é friend! logo nao preciso de usar p.getX()
ostream &operator<<(ostream &os, Point p) {
    os<<"("<<p.x<<","<<p.y<<")";
    return os;
}
//Set at 0
Figura::Figura():centro(0,0),cor(""){
}
//Set
Figura::Figura(Point centro_, string cor_):centro(centro_), cor(cor_){
}

ostream &operator<<(ostream &os, Figura f){
    os<<f.centro<<", ";
    if(f.cor==""){
        os<<"[none]";
    }
    else{
        os<<f.cor;
    }
    return os;
}

Circle::Circle():radius(1),Figura() {
}

Circle::Circle(float radius_, Point centro_, string cor_):radius(radius_ ),Figura(centro_,cor_){
}

ostream &operator<<(ostream &os, Circle c){
    os<<c.radius<<c.centro<<endl;
    if(c.cor==""){
        os<<"[none]";
    }
    else{
        os<<c.cor;
    }
    return os;
}

double Circle::Area() const {
    double area=0;
    area=3.14*radius*radius;
    return area;
}

Rectangle::Rectangle():height(2), width(1),Figura(){
}

Rectangle::Rectangle(float height_, float width_, Point centro_, string cor_):height(height_),width(width_),Figura(centro_,cor_){
}

ostream &operator<<(ostream &os, Rectangle r){
    os<<r.height<<" , "<<r.width<<r.centro<<endl;
    if(r.cor==""){
        os<<"[none]";
    }
    else{
        os<<r.cor;
    }
    return os;
}

double Rectangle::Area() const {
    double area=0;
    area=width*height;
    return area;
}

Square::Square():height(1),Figura(){
}

Square::Square(float height_, Point centro_, string cor_):height(height_),Figura(centro_,cor_){
}

ostream &operator<<(ostream &os, Square s) {
    os<<s.height<<" , "<<s.centro<<endl;
    if(s.cor==""){
        os<<"[none]";
    }
    else{
        os<<s.cor;
    }
    return os;
}

double Square::Area() const {
    double area;
    area=height*height;
    return area;
}
