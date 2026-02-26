#include <iostream>
#include <vector>
#include <cmath>
#include <string>



using namespace std;

class Point{
public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

    double distanceTo(const Point& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};

double Area(const Point& a, const Point& b, const Point& c){
    double ab = a.distanceTo(b);
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);
    double s = ca + bc + ca;

    // Heron's Formula
    return sqrt(s * (s - ab) * (s - bc ) * (s - ca));
}

double CrossProduct(const Point& a, const Point& b, const Point& c){
    return abs((b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N = 0;
    cin >> N;

    vector<Point> points;
    for(int i = 0; i < N; i ++ ){
        double x, y;
        cin >> x >> y;
        points.emplace_back(x,y);
    }
    
    
    

    return 0;
}
