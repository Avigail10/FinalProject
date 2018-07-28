#include "ListPanel.h"


ListPanel::ListPanel(int height, int width, vector<string> options) : Panel(height, width){
}

int ListPanel::itemInFocus(){
	int cSize = controls.size();
	for (size_t i = 0; i < cSize; i++){
		if (static_cast<ButtonItem*>(controls[i])->isFocus()){
			return i;
		}
	}
	static_cast<ButtonItem*>(controls[0])->focus();
	return 0;
}



