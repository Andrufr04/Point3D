#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point() {}
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Print() // метод класса
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    void Input(int a, int b) // метод класса
    {
        x = a;
        y = b;
    }

    Point operator+ (Point& b) // obj+obj
    {
        Point sum(x + b.x, y + b.y);
        return sum;
    }
    //Point operator+ (int b) // obj+int
    //{
    //    Point sum(x + b, y + b);
    //    return sum;
    //}

    int GetX()const
    {
        return x;
    }
    int GetY()const
    {
        return y;
    }
    void SetX(int _x)
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
};

Point operator+(int a, Point& b) // int+ Point
{
    //Point rez(b.GetX() + a, b.GetY() + a);
    Point rez;
    rez.SetX(a + b.GetX());
    rez.SetY(a + b.GetY());
    return rez;
}
Point operator+(Point& b, int a) // Point + int 
{
    Point rez(b.GetX() + a, b.GetY() + a);
    return rez;
}
Point operator++(Point& obj) // ++a
{
    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);
    return obj;
}
Point operator++(Point& obj, int) // a++
{
    Point temp(obj.GetX(), obj.GetY());

    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);

    return temp;
}

Point operator-(int a, Point& b) // int+ Point
{
    Point rez;
    rez.SetX(a - b.GetX());
    rez.SetY(a - b.GetY());
    return rez;
}
Point operator-(Point& b, int a) // Point + int 
{
    Point rez(b.GetX() - a, b.GetY() - a);
    return rez;
}
Point operator-(Point& b, Point& a) // Point + int 
{
    Point rez(b.GetX() - a.GetX(), b.GetY() - a.GetY());
    return rez;
}
Point operator--(Point& obj)
{
    obj.SetX(obj.GetX() - 10);
    obj.SetY(obj.GetY() - 10);
    return obj;
}
Point operator--(Point& obj, int)
{
    Point temp(obj.GetX(), obj.GetY());

    obj.SetX(obj.GetX() - 10);
    obj.SetY(obj.GetY() - 10);

    return temp;
}

Point operator*(int a, Point& b)
{
    Point rez;
    rez.SetX(a * b.GetX());
    rez.SetY(a * b.GetY());
    return rez;
}
Point operator*(Point& b, int a)
{
    Point rez(b.GetX() * a, b.GetY() * a);
    return rez;
}
Point operator*(Point& b, Point& a)
{
    Point rez(b.GetX() * a.GetX(), b.GetY() * a.GetY());
    return rez;
}

Point operator+=(Point& b, int a)
{
    b.SetX(b.GetX() + a);
    b.SetY(b.GetY() + a);
    return b;
}
Point operator-=(Point& b, int a)
{
    b.SetX(b.GetX() - a);
    b.SetY(b.GetY() - a);
    return b;
}
Point operator*=(Point& b, int a)
{
    b.SetX(b.GetX() * a);
    b.SetY(b.GetY() * a);
    return b;
}
Point operator/=(Point& b, int a)
{
    if (a == 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        b.SetX(b.GetX() / a);
        b.SetY(b.GetY() / a);
    }
    return b;
}

int main()
{
    Point a(10, 20);
    a.Print();
    /*Point b(3,4);
    b.Print();*/

    a /= 0;
    a.Print();

    /*Point x = 100 - a;
    x.Print();
    x = a - b;
    x.Print();
    x = 10 * a;
    x.Print();
    x = --a;
    x.Print();
    x = a--;
    x.Print();
    x = a * b;
    x.Print();*/

    //Point c = a + b;
    //c.Print();
    //c = 10 + a;
    //c.Print();
    //c = ++a;
    //c.Print();
    //a.Print();
    //++a;
    //a.Print();
    //Point d = a++; // d= 1 2 a = 11, 12
    //a.Print();
    //d.Print();
}