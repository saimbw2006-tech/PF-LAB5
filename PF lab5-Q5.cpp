#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is odd\n", num);} 
		else {
        printf("%d is even\n", num);
    }
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of two\n", num);
    } else {
        printf("%d is not a power of two\n", num);
    }
    return 0;
}
