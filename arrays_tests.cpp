#include "arrays.hpp"
#include "unit_test_framework.hpp"

bool compare_arrays(int arr1[], int size1, int arr2[], int size2) {
  if (size1 != size2) {
    return false;
  }

  for (int i = 0; i < size1; ++i) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }

  return true;
}

TEST(test_slide_right_1) {
  int testing[] = { 4, 0, 1, 3, 3 };
  int correct[] = { 3, 4, 0, 1, 3 };
  slideRight(testing, 5);
  ASSERT_TRUE(compare_arrays(testing, 5, correct, 5));
}

TEST(test_flip_1) {
  int testing[] = { 4, 0, 1, 3, 3 };
  int correct[] = { 3, 3, 1, 0, 4 };
  flip(testing, 5);
  ASSERT_TRUE(compare_arrays(testing, 5, correct, 5));
}



TEST()

TEST_MAIN()