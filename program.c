#include <stdio.h>
#include <math.h>

int main() {
    int choice, num, original, reverse, remainder;
    int i, flag, sum, digits;
    long long fact;
    int a, b, c;

    do {
        printf("\n\n===== NUMBER PROGRAM MENU =====\n");
        printf("1. Palindrome\n");
        printf("2. Armstrong\n");
        printf("3. Prime Number\n");
        printf("4. Factorial\n");
        printf("5. Fibonacci Series\n");
        printf("6. Reverse a Number\n");
        printf("7. Sum of Digits\n");
        printf("8. Even or Odd\n");
        printf("9. Largest of Three Numbers\n");
        printf("10. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            // PALINDROME
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                original = num;
                reverse = 0;

                while (num != 0) {
                    remainder = num % 10;
                    reverse = reverse * 10 + remainder;
                    num = num / 10;
                }

                if (original == reverse)
                    printf("Palindrome Number");
                else
                    printf("Not a Palindrome Number");

                break;


            // ARMSTRONG
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                original = num;
                digits = 0;
                sum = 0;

                while (original != 0) {
                    digits++;
                    original = original / 10;
                }

                original = num;

                while (original != 0) {
                    remainder = original % 10;
                    sum = sum + pow(remainder, digits);
                    original = original / 10;
                }

                if (sum == num)
                    printf("Armstrong Number");
                else
                    printf("Not an Armstrong Number");

                break;


            // PRIME
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                flag = 1;

                if (num <= 1)
                    flag = 0;

                for (i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                    printf("Prime Number");
                else
                    printf("Not a Prime Number");

                break;


            // FACTORIAL
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                fact = 1;

                for (i = 1; i <= num; i++) {
                    fact = fact * i;
                }

                printf("Factorial = %lld", fact);

                break;


            // FIBONACCI
            case 5:
                printf("Enter number of terms: ");
                scanf("%d", &num);

                a = 0;
                b = 1;

                printf("Fibonacci Series: ");

                for (i = 1; i <= num; i++) {
                    printf("%d ", a);

                    c = a + b;
                    a = b;
                    b = c;
                }

                break;


            // REVERSE
            case 6:
                printf("Enter a number: ");
                scanf("%d", &num);

                reverse = 0;

                while (num != 0) {
                    remainder = num % 10;
                    reverse = reverse * 10 + remainder;
                    num = num / 10;
                }

                printf("Reverse = %d", reverse);

                break;


            // SUM OF DIGITS
            case 7:
                printf("Enter a number: ");
                scanf("%d", &num);

                sum = 0;

                while (num != 0) {
                    remainder = num % 10;
                    sum = sum + remainder;
                    num = num / 10;
                }

                printf("Sum of digits = %d", sum);

                break;


            // EVEN OR ODD
            case 8:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("Even Number");
                else
                    printf("Odd Number");

                break;


            // LARGEST OF THREE
            case 9:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                if (a >= b && a >= c)
                    printf("%d is largest", a);
                else if (b >= a && b >= c)
                    printf("%d is largest", b);
                else
                    printf("%d is largest", c);

                break;


            case 10:
                printf("Exiting program...");
                break;


            default:
                printf("Invalid choice!");
        }

    } while (choice != 10);

    return 0;
}