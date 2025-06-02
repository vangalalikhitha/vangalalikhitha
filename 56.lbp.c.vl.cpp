#include <stdio.h>

int main() {
  int num, digit, largest = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num;
  }
  
  if (num == 0) {
      largest = 0;
  } else {
      while (num != 0) {
        digit = num % 10;
        if (digit > largest) {
          largest = digit;
        }
        num /= 10;
      }
  }

  printf("The largest digit is: %d\n", largest);

  return 0;
}
