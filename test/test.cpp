#include <gtest/gtest.h>

int Func(const char* File) {
  FILE *f = fopen(File, "r");
  int a, b;
  fscanf(f, "%d %d\n", &a, &b);
  fclose(f);

  if (a > b) { // >=
    return 0;
  } else {
    return 1;
  }
}

TEST(main, Func1) {
    ASSERT_EQ(0,Func("../../test/1.in"));
}
TEST(main,Func2){
    ASSERT_EQ(0,Func("../../test/2.in"));
}
TEST(main,Func3){
    ASSERT_EQ(1,Func("../../test/3.in"));
}