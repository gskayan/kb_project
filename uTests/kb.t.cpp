#include <iostream>
#include <gtest/gtest.h>


TEST(KB, BuildWorksTest)
{
  ASSERT_TRUE(true) << "Build is broken" << std::endl;
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
