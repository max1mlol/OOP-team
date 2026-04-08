#include <iostream>
#include <string>
#include <cmath>



class Square : public TwoDShape {
private:
    Point vertices[4];
    double side;

public:
    // leftTop = зүүн дээд орой
    Square(string n, double x, double y, double s) : TwoDShape(n) {
        side = s;

        // Зүүн дээд орой
        vertices[0] = {x, y};

        // Баруун дээд
        vertices[1] = {x + side, y};

        // Баруун доод
        vertices[2] = {x + side, y - side};

        // Зүүн доод
        vertices[3] = {x, y - side};
    }

    double area() const override {
        return side * side;
    }

    double perimeter() const override {
        return 4 * side;
    }

    void display() const override {
        cout << "=== Square ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Side: " << side << endl;
        cout << "Vertices:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "V" << i + 1 << ": (" << vertices[i].x << ", " << vertices[i].y << ")" << endl;
        }
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};