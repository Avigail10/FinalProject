#pragma once

#include "../Control/Control.h"
#include <vector>

using namespace std;

class Panel : public Control
{
	bool validSpaceWithControllers(Control* c);
protected:
	vector<Control *> controls;

public:
	Panel(int height, int width);
	bool validSpace(Control* c); 
	void getAllControls(vector<Control *> &controls);
	~Panel();
};

static bool isMsgBoxOpen = false;
