#include "demoClass.h"

demoClass::demoClass() {

}

demoClass::~demoClass() {

}

void demoClass::Update(EventListener *e) {
	
	if (e->RETURN)
	{
		cout << "Key Held" << endl;
	}
	if (e->LEFTMOUSE)
	{
		cout << "Mouse Held" << endl;
	}
	if (e->CON_A)
	{
		cout << "Controller Held" << endl;
	}
}