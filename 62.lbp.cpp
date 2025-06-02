#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
    while (originalNum != 0)
	 {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }
    return (sum == num);
}
int main() {
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("Armstrong numbers between %d and %d are: \n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
