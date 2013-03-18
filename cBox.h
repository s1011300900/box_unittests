#ifndef C_BOX_H
#define C_BOX_H

#include <exception>

class cBoxException : public std::exception {
	
};

class cBoxVolumeException : public cBoxException {
};

class cBox {
public:
	cBox();
	
	int setHeight(const double& height);
	int setWidth(const double& width);
	int setLenght(const double& lenght);
	double getHeight();
	double getWidth();
	double getLenght();
	void resetParams();
	double calculateVolume();
	
private:
	double m_height;
	double m_width;
	double m_lenght;
};

#endif /* C_BOX_H */