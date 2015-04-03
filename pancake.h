#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"
// Pancake class
const double Pi=3.14159265359;
struct Pancake : Ellipse{
		// Width is the larger number, height should be smallish.
	Pancake(Point poi,int width,int height=10):p(poi),w(width),h(height), Ellipse(p,w,h){
	elly=new Ellipse(p,w,h);
	elly->set_fill_color(fl_rgb_color(153,101,21));
	//butt = new Button(Point{p.x-h,p.y-w},2*w,2*h,"",[](Address,Address pw){reference_to<Pancake>(pw).flip();});
	//attach(butt);
	}
	//  Color golden_brown(fl_rgb_color(153,101,21)); 
	int button_width() const {return 2*w;}
	int button_height() const {return 2*h;}
	Point button_location() const {return Point{p.x-h,p.y-w};}
	void move_by(int dx,int dy){p.x+=dx; p.y-=dy;}
	void move_to(int x,int y){p.x=x;p.y=y;}
	double area() const {return area_ellipse;}
	void flip();
	int position(){return position;}
	int set_position(int x){position=x;}
	void set_fill_color(Color col) { elly->set_fill_color(col);}
	void set_color(Color col) { elly->set_fill_color(col); }
	void draw_lines() const{elly->draw_lines();}
private:
	Point p;
	int position{0};
	//Button* butt;
	Ellipse* elly;
	int w,h;
	double area_ellipse=Pi*w*h;
};
void Pancake::flip(){
	// do something
}