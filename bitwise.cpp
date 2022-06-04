#include <stdio.h>
namespace ConsoleApp2 {

    class Program {

    public:
        static void Main() {

            int n, num;

            printf("Enter the number n: ");

            scanf("%d", &n);

            switch (n) {

            case 1: {
                printf("Enter any number: ");

                scanf("%d", &num);


                int rem = 0, rev = 0;
                rev = 0, rem = 0;

                int dup = num;

                while (num > 0)

                {
                    rem = num % 10;

                    rev = (rev * 10) + rem;

                    num = num / 10;

                }

                if (rev == dup)
                    printf("number is palindrome");
                else
                    printf("number is not palindrome");

                break;
            }


            case 2: {
                int fact = 1;
                printf("Enter the num: ");

                scanf("%d", &num);

                if (num == 0) {
                    printf("Factorial is 1");
                }

                do
                {
                    fact *= num;
                    num--;
                } while (num > 0);

                printf("Factorial is %d", fact);

                break;
            }

            default: {
                printf("Invalid Input... Please try again!!\n");
                Program::Main();
                break;
            }

            }
        }

    };
}

int main() {
    ConsoleApp2::Program::Main();
    return 0;
}