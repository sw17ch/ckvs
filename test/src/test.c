#include "greatest.h"

TEST should_work() {
  ASSERT_EQ(1,1);
  PASS();
}

SUITE(the_suite) {
  RUN_TEST(should_work);
}

GREATEST_MAIN_DEFS();

int main(int argc, char * argv[]) {
  GREATEST_MAIN_BEGIN();
  RUN_SUITE(the_suite);
  GREATEST_MAIN_END();
}
