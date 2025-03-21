#include "functions.h"
#include <vector>
#include <gtest/gtest.h>
TEST(Hello, empty){

}

TEST(Hello, Factor_For_2){
    std::vector<int> expected_out = {2};
    ASSERT_EQ(primeFactorize(2), expected_out);
}

TEST(Hello, Factor_For_3){
    std::vector<int> expected_out = {3};
    ASSERT_EQ(primeFactorize(3), expected_out);
}

TEST(Hello, Factor_For_4){
    std::vector<int> expected_out = {2,2};
    ASSERT_EQ(primeFactorize(4), expected_out);
}

TEST(Hello, Factor_For_5){
    std::vector<int> expected_out = {5};
    ASSERT_EQ(primeFactorize(5), expected_out);
}

TEST(Hello, Factor_For_6){
    std::vector<int> expected_out = {2,3};
    ASSERT_EQ(primeFactorize(6), expected_out);
}
TEST(Hello, Factor_For_7){
    std::vector<int> expected_out = {7};
    ASSERT_EQ(primeFactorize(7), expected_out);
}
TEST(Hello, Factor_For_8){
    std::vector<int> expected_out = {2,2,2};
    ASSERT_EQ(primeFactorize(8), expected_out);
}
TEST(Hello, Factor_For_9){
    std::vector<int> expected_out = {3,3};
    ASSERT_EQ(primeFactorize(9), expected_out);
}
TEST(Hello, Factor_For_10){
    std::vector<int> expected_out = {2,5};
    ASSERT_EQ(primeFactorize(10), expected_out);
}

TEST(Hello, Factor_For_large){
    std::vector<int> expected_out = {2,2,3,5,7,13};
    ASSERT_EQ(primeFactorize(2*2*3*5*7*13), expected_out);
}