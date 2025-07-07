Based on the provided YAML file and C++ source code, I will generate a set of GoogleTest-based unit tests for the `add` function.

Here are the generated tests:

```cpp
// add_test.cpp
#include <gtest/gtest.h>
#include "your_file_name.h"  // Include the original C++ file

TEST(AddTest, ZeroPlusZero) {
    EXPECT_EQ(add(0, 0), 0);
}

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3);
}

TEST(AddTest, MixedSigns) {
    EXPECT_EQ(add(-1, 2), 1);
}
```

In these tests, I've followed the rules strictly:

*   Used `TEST()` macros for each test case
*   Included necessary headers (`gtest/gtest.h` and the original C++ file)
*   Avoided duplicates by writing unique test cases for different scenarios
*   Written a test for each public function (`add`), as per your requirement

Please note that you should replace `"your_file_name.h"` with the actual name of the original C++ file.

