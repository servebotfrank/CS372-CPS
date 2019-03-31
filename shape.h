//
// Created by Ian Ferguson on 2019-03-26.
//

#ifndef CS372_CPS_SHAPE_H
#define CS372_CPS_SHAPE_H

#include <iostream>
#include <fstream>
#include <utility>
using std::pair;
#include <string>
using std::string;

class Shape
{
public:
    Shape();

    pair<double, double> getCenter();
    double getHeight();
    double getWidth();

    void setHeight(double num);
    void setWidth(double num);
    void setCenter(double x, double y);

    void openfile(const char filename[]);
    void closefile();

    virtual string generatePostScript();
    void draw();

protected:
    std::ofstream file;

private:
    pair<double, double> _center;
    double _height;
    double _width;
    string _filename;
};

class Circle : public Shape
{
public:
    Circle();
    Circle(double radius);

    double getRadius();

    virtual string generatePostScript() override;

private:
    double _radius;
};

class Rectangle: public Shape
{
public:
    Rectangle();


private:

};

#endif //CS372_CPS_SHAPE_H
