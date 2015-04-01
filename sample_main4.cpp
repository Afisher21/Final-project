 #include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
#include "pancake.h"
// Compile using the following: g++ -std=c++14 *cpp -lfltk -lfltk_images
int main()
try { 
  if(H112 != 201401L)error("Error: incorrect std_lib_facilities_4.h version ",
		  	   H112);
  Simple_window win1(Point(100,200),600,400,"Graphics 1");
 
  Pancake pan(Point{100,200},70,10);
  win1.attach(pan);
  win1.wait_for_button();
  return 0;
}
catch(exception& e) {
	cerr << "exception: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Some exception\n";
	return 2;
}
