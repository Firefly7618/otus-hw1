#include "lib.h"

#include <gtest/gtest.h>

TEST(gtest_version, gttest_valid_versionst_1) {
  ASSERT_TRUE(version() > 0);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
