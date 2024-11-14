#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            // Check for overflow before multiplying
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            
            int digit = x % 10;
            ans = ans * 10 + digit;
            x /= 10;
        }
        
        return ans;
    }
};

// Test function to demonstrate usage
void testReverse() {
    Solution solution;
    
    // Test case 1: x = 123
    std::cout << "Test 1: Input = 123, Output = " << solution.reverse(123) << std::endl;
    
    // Test case 2: x = -123
    std::cout << "Test 2: Input = -123, Output = " << solution.reverse(-123) << std::endl;
    
    // Test case 3: x = 120
    std::cout << "Test 3: Input = 120, Output = " << solution.reverse(120) << std::endl;
    
    // Test case 4: x = 0
    std::cout << "Test 4: Input = 0, Output = " << solution.reverse(0) << std::endl;
    
    // Test case 5: Test overflow case
    std::cout << "Test 5: Input = 1534236469, Output = " << solution.reverse(1534236469) << std::endl;
}

int main() {
    testReverse();
    return 0;
}
