
#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"
#include "pancake.h"
struct Test_window:Graph_lib::Window{
	Test_window(Point xy,int w, int h, int difficulty,const string& title):Window{xy,w,h,title}{
	for(Pancake peeenis:pan)attach(peeenis);
	for(int i=0;i<difficulty;++i)Move_by.push_back({pan[i].button_location(),pan[i].button_width,pan[i].button_height(),"Delicious",[](Address,Address pw){reference_to<Pancake>(pw).move();}})
	for(int j=0;j<difficulty;++j) attach(Move_by[j]);
	}
private:
	Vector_ref<Pancake> pan;
	pan.push_back(new Pancake(Point{300,200+(a*22)},50+(a*10),10));
	Vector_ref<Button> Move_by;
	void move(){
	pan.move_by(5,0);
	redraw();
	}
};
