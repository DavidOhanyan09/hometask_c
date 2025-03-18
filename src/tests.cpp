#include "functions.h"
#include <vector>
#include <gtest/gtest.h>


TEST(Hello, empty){
          std::vector<int> expected_out;
          expected_out.push_back(1);
          expected_out.push_back(7);
          std::vector<int> output;
          output = primeFactorize(7);
          sort(expected_out.begin(), expected_out.end());
          sort(output.begin(), output.end());
          for(int i = 0; i<2; i++){
              ASSERT_EQ(expected_out[i], output[i]);
           }
        
     }
     