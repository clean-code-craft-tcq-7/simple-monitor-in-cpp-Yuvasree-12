#include <gtest/gtest.h>
#include "./monitor.h"

TEST(Monitor, NotOkWhenAnyVitalIsOffRange) {
  ASSERT_FALSE(vitalsOk(99, 102, 70));
  ASSERT_TRUE(vitalsOk(98.1, 70, 98));
}



      hghgvk
TEST(Monitor, OkWhenAllVitalsAreInRange) {
  ASSERT_TRUE(vitalsOk(98.6, 72, 95));  