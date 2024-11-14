#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int rev = 0;
    while(x) {
        // Using 214748364 (INT_MAX/10) for overflow check
        if(rev > 214748364 || rev < (-214748364))
            return 0;
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

// Test function to demonstrate usage
void testReverse() {
    // Test case 1: x = 123
    printf("Test 1: Input = 123, Output = %d\n", reverse(123));
    
    // Test case 2: x = -123
    printf("Test 2: Input = -123, Output = %d\n", reverse(-123));
    
    // Test case 3: x = 120
    printf("Test 3: Input = 120, Output = %d\n", reverse(120));
    
    // Test case 4: x = 0
    printf("Test 4: Input = 0, Output = %d\n", reverse(0));
    
    // Test case 5: Test overflow case
    printf("Test 5: Input = 1534236469, Output = %d\n", reverse(1534236469));
}

int main() {
    testReverse();
    return 0;
}
