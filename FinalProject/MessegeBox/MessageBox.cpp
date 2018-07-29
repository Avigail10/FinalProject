#include "MsgBox.h"


MsgBox::MsgBox(int height, int width) : Panel(height, width)
{
	setLayer(2);
	isfocusable = false;
	
	Button *button = new Button(width / 2, Label::centerlizeTxt(width/2, "Send"));

	Label *title = new Label(width - 2, "Thanks");
	Label *text = new Label(width - 2, "Bye Bye!");

	CloseListener *closeListener = new CloseListener(*this);

	button->addListener(*closeListener);

	title->setLayer(2);
	text->setLayer(2);
	button->setLayer(2);

	title->setBorder(BorderType::Single);
	text->setBorder(BorderType::Single);
	button->setBorder(BorderType::Single);

	addControl(title, 1,1);
	addControl(text,1,4);
	addControl(button, (width / 4), height-4);
}