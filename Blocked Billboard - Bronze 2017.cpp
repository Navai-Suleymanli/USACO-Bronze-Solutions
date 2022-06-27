#include <iostream>
using namespace std;

struct Rect{
    int x1, y1, x2, y2;
};

int area(Rect r){
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int intersect_area(Rect p, Rect q){
    int x_overlap = max(0, min(q.x2, p.x2) - max(p.x1, q.x1) );
    int y_overlap = max(0, min(q.y2, p.y2) - max(p.y1, q.y1));
    return x_overlap * y_overlap;
}


int main() {
    ios::sync_with_stdio(0);
    
    Rect a, b, t;
    
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;
    cin>>t.x1>>t.y1>>t.x2>>t.y2;
    
    cout<< area(a) + area(b) - intersect_area(a, t) - intersect_area(b , t)<<"\n";
    
	// your code goes here
	return 0;
}
