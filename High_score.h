#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"
struct High_score{
	ifstream ifst(high_scores.txt);
	if(!ifst){error("Could not find high scores file!");}
	istringstream iss;
	string initials;
	int score;
	while(!ifst.eof())iss>>initals>>score;



};