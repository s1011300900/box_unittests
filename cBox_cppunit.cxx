#include "cBox_cppunit.h"
#include "cBox.h"

#include "cBox.cxx"

CPPUNIT_TEST_SUITE_REGISTRATION( cBox_CPPUnit );

void cBox_CPPUnit::test_0x0x0_volume() {
	cBox box;
	CPPUNIT_ASSERT_EQUAL(box.calculateVolume(), 0.0);
}

void cBox_CPPUnit::test_minus1_height() {
	cBox box;
	CPPUNIT_ASSERT(box.setHeight(-2) == -1);
}
