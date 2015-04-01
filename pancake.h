#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
// Pancake class
const double Pi=3.14159265359;
struct Pancake:Ellipse{
	Pancake(Point poi, int ww, int hh){p=poi;width=ww;height=hh;Ellipse(p,width,height);} // center, min , max from center
	 
  //Point button_location() const{return but_point;};
  int button_width() const {return 2*major();}
  int button_height() const {return 2*minor();}
  
  // Test of githubs ability to version control
  // pancake 19
  
  /*double area_out() const {return area;}
  private:
  double area=Pi*width*height;
  Point but_point=(p.x-height,p.y-width);
  Point p;
  int width,height;     */
};