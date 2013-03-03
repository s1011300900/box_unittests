#include "cBox.h"

/**
 * @brief Конструктор
 *
 **/
cBox::cBox(): m_height(0.0), 
			  m_width(0.0), 
			  m_lenght(0.0) {
}

/**
 * @brief Установить высоту
 *
 * @param width значение
 * @return int 0 - нормальное завершение,
 * -1 - ошибка
 **/
void cBox::setHeight(const double& height) {
	if (height <= 0) {
		return -1;
	}
	
	m_height = height;
	return 0;
}

/**
 * @brief Установить ширину
 *
 * @param width значение
 * @return int 0 - нормальное завершение,
 * -1 - ошибка
 **/
int cBox::setWidth(const double& width) {
	if (width <= 0) {
		return -1;
	}
	
	m_width = width;
	return 0;
}

/**
 * @brief Установить длину
 *
 * @param lenght значение
 * @return int 0 - нормальное завершение,
 * -1 - ошибка
 **/
int cBox::setLenght(const double& lenght) {
	if (lenght <= 0) {
		return -1;
	}
	
	m_lenght = lenght;
	return 0;
}

/**
 * @brief Сбросить значения параметров
 *
 * @return void
 **/
void cBox::resetParams() {
	m_height = 0.0;
	m_width = 0.0;
	m_lenght = 0.0;
}

/**
 * @brief Получить значение высоты
 *
 * @return double значение
 **/
double cBox::getHeight() {
	return m_height;
}

/**
 * @brief Получить значение ширины
 *
 * @return double значение
 **/
double cBox::getWidth() {
	return m_width;
}

/**
 * @brief Получить значение длины
 *
 * @return double значение
 **/
double cBox::getLenght() {
	return m_lenght;
}

/**
 * @brief Посчитать объем коробки
 *
 * @return double значение
 **/
double cBox::calculateVolume() {
	double volume = m_height * m_width * m_lenght;
	if (volume <= 0.0) {
		throw 0;		// исключение невозможного объема
	}
	return volume;
}
