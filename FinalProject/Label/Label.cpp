#include "Label.h"


Label::Label(int width, string value):Control(width)
{
	isfocusable = false;
	if (width - value.size() < 2) 
		this->value = value;
	else {
		this->value = centerlizeTxt(width, value);
	}
}

string Label::getValue() {
	return value;
}

void Label::setValue(string val) {
	value = centerlizeTxt(getWidth() - 2, val);
}

Label::~Label()
{
}
