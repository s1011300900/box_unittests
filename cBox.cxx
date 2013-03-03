#include "cBox.h"

/**
 * @brief �����������
 *
 **/
cBox::cBox(): m_height(0.0), 
			  m_width(0.0), 
			  m_lenght(0.0) {
}

/**
 * @brief ���������� ������
 *
 * @param width ��������
 * @return int 0 - ���������� ����������,
 * -1 - ������
 **/
void cBox::setHeight(const double& height) {
	if (height <= 0) {
		return -1;
	}
	
	m_height = height;
	return 0;
}

/**
 * @brief ���������� ������
 *
 * @param width ��������
 * @return int 0 - ���������� ����������,
 * -1 - ������
 **/
int cBox::setWidth(const double& width) {
	if (width <= 0) {
		return -1;
	}
	
	m_width = width;
	return 0;
}

/**
 * @brief ���������� �����
 *
 * @param lenght ��������
 * @return int 0 - ���������� ����������,
 * -1 - ������
 **/
int cBox::setLenght(const double& lenght) {
	if (lenght <= 0) {
		return -1;
	}
	
	m_lenght = lenght;
	return 0;
}

/**
 * @brief �������� �������� ����������
 *
 * @return void
 **/
void cBox::resetParams() {
	m_height = 0.0;
	m_width = 0.0;
	m_lenght = 0.0;
}

/**
 * @brief �������� �������� ������
 *
 * @return double ��������
 **/
double cBox::getHeight() {
	return m_height;
}

/**
 * @brief �������� �������� ������
 *
 * @return double ��������
 **/
double cBox::getWidth() {
	return m_width;
}

/**
 * @brief �������� �������� �����
 *
 * @return double ��������
 **/
double cBox::getLenght() {
	return m_lenght;
}

/**
 * @brief ��������� ����� �������
 *
 * @return double ��������
 **/
double cBox::calculateVolume() {
	double volume = m_height * m_width * m_lenght;
	if (volume <= 0.0) {
		throw 0;		// ���������� ������������ ������
	}
	return volume;
}
