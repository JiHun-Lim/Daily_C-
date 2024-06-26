#include <iostream>

using namespace std;

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) {}

    void ShowPosition() const
    {
        cout << "xpos : " << xpos << ", ypos : " << ypos << endl;
    }

    friend ostream& operator<<(ostream&, const Point&);

    friend istream& operator>>(istream&, Point&);

};

ostream& operator<<(ostream&os, const Point&pos)
{
    os << "Point X : " << pos.xpos << ",  Point Y : " << pos.ypos << endl;

    return os;
}

istream& operator>>(istream&is, Point&pos)
{
    is >> pos.xpos >> pos.ypos;
    return is;
}


int main(void)
{
    Point pos1(1,3);

    cin >> pos1;

    pos1.ShowPosition();

    return 0;

}