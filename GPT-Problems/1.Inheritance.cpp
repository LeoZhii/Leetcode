// Leo Zhi
// April 13, 2023

// Create a base class called "Shape" that has two protected member variables, "width" and "height",
// and two public methods, "setWidth" and "setHeight" that allow the values of width and height to be set.
// Then, create two derived classes called "Rectangle" and "Triangle".

// The Rectangle class should inherit from the Shape class and add a public method called "getArea"
// that returns the area of the rectangle (width * height).

// The Triangle class should also inherit from the Shape class and add a public method called "getArea"
// that returns the area of the triangle (width * height / 2).

// Finally, in your main function, create an object of each class, set their width and height,
// and call their getArea methods to output the calculated areas.

#include <iostream>

using namespace std;

class Shape
{
protected:
    unsigned int width;
    unsigned int height;

public:
    void setWidth(unsigned int w)
    {
        width = w;
    }
    void setHeight(unsigned int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    unsigned int getArea()
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    unsigned int getArea()
    {
        return width * height / 2;
    }
};

int main(void)
{
    class Rectangle myRectangle;
    myRectangle.setHeight(5);
    myRectangle.setWidth(5);
    cout << "The rectangular area is " << myRectangle.getArea() << endl;

    class Triangle myTriangle;
    myTriangle.setHeight(5);
    myTriangle.setWidth(5);
    cout << "The triangular area is " << myTriangle.getArea() << endl;

    return 0;
}