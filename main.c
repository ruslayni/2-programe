#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the LCM of an array of numbers
int findLCM(int arr[], int n) {
    int result = arr[0]; // Initialize the result with the first number

    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]); // Find the LCM of the current number and the result
    }

    return result;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[20];
    printf("Enter the numbers separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcmResult = findLCM(arr, n);
    printf("Least Common Multiple: %d\n", lcmResult);

    return 0;
}
