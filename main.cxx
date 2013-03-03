#include <iostream>
#include "cBox.h"

int main(int, char**) {
	cBox box;
	
	box.setHeight(2);
	box.setWidth(3);
	box.setLenght(4);
	std::cout << "Box volume = " << box.calculateVolume() <<std::endl;
	return 0;
}
