#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
// Pancake class
const double Pi=3.14159265359;
struct Pancake : Ellipse{
	Pancake(Point poi,int width,int height):p(poi),w(width),h(height), Ellipse(p,w,h){
	elly=new Ellipse(p,w,h);
	}
	int button_width() const {return 2*w;}
	int button_height() const {return 2*h;}
	Point button_location() const {return Point{p.x-h,p.y-w};}
	double area() const {return area_ellipse;}
	void set_fill_color(Color col) { elly->set_fill_color(col);}
	void set_color(Color col) { elly->set_fill_color(col); }
	void draw_lines() const{elly->draw_lines();}
private:
	Point p;
	Ellipse* elly;
	int w,h;
	double area_ellipse=Pi*w*h;
};
