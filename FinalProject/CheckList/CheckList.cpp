#include "CheckList.h"


CheckList::CheckList(int height, int width, vector<string> options) : ListPanel(height, width, options){
	int length = options.size();
	int i = 0;
	while (i < length) {
		ButtonItem *btn = new ButtonItem(options[i], getWidth() - 4, i);
		btn->setBorder(BorderType::Single);
		SelectListener* listener = new SelectListener(*this);
		btn->addListener(*listener);
		addControl(btn, getBodyLeft(), getBodyTop() + (i * 3));

		i++;
	}
}
