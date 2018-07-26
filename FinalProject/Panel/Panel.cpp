#include "Panel.h"

const int CONSTANT = 2;

Panel::Panel(int height, int width) : Control(width) {
	setHeight(height);
}

bool Panel::validSpace(Control* ctrl) {

	if (ctrl->getTop() < getBodyTop() || ctrl->getLeft() < getBodyLeft())
		return false;
	if ((ctrl->getTop() + ctrl->getHeight()) > (getBodyTop() + this->getHeight() - CONSTANT))
		return false;
	if ((ctrl->getLeft() + ctrl->getWidth() - CONSTANT) > (getBodyLeft() + this->getWidth() - CONSTANT))
		return false;

	if (!(ctrl->getLayer() - CONSTANT)) return true;
	return validSpaceWithControllers(ctrl);
}

void Panel::getAllControls(vector<Control *> &cont) {

	int cSize = controls.size(), i = 0;

	while (i < cSize) {
		cont.push_back(controls[i]);
	}
}

Panel::~Panel() {
	int cSize = controls.size();
	for (int i = 0; i < cSize; i++) {
		free(controls[i]);
	}
}
