#include "cBox_cppunit.h"

#include "cBox.cxx"		// для библиотеки нужна реализация класса

CPPUNIT_TEST_SUITE_REGISTRATION( cBox_CPPUnit );

/**
 * @brief Тест на появление исключения при попытке расчитать невозможный объем коробки
 *
 * @return void
 **/
void cBox_CPPUnit::test_0_volume_exception() {
	cBox box;
	CPPUNIT_ASSERT_THROW(box.calculateVolume(), cBoxVolumeException);
}

/**
 * @brief Тест на объем коробки при единичном значении длины, ширины и высоты
 *
 * @return void
 **/
void cBox_CPPUnit::test_1x1x1_volume() {
	cBox box;
	box.setHeight(1.0);
	box.setLenght(1.0);
	box.setWidth(1.0);
	CPPUNIT_ASSERT_EQUAL(box.calculateVolume(), 1.0);
}

/**
 * @brief Тест попытки установить отрицательное значение параметра высоты
 *
 * @return void
 **/
void cBox_CPPUnit::test_minus5_height() {
	cBox box;
	CPPUNIT_ASSERT(box.setHeight(-5.0) == -1);
}

/**
 * @brief Тест для метода, реализующего сброс параметров коробки
 *
 * @return void
 **/
void cBox_CPPUnit::test_reset_params() {
	cBox box;
	box.setHeight(1.0);
	box.setLenght(1.0);
	box.setWidth(1.0);
	CPPUNIT_ASSERT_EQUAL(box.calculateVolume(), 1.0);
	box.resetParams();
	CPPUNIT_ASSERT_THROW(box.calculateVolume(), cBoxVolumeException);
}

/**
 * @brief Тест конструктора
 *
 * @return void
 **/
void cBox_CPPUnit::test_constructor() {
	cBox box;
	CPPUNIT_ASSERT_EQUAL(box.getHeight(), 0.0);
	CPPUNIT_ASSERT_EQUAL(box.getWidth(), 0.0);
	CPPUNIT_ASSERT_EQUAL(box.getLenght(), 0.0);
};