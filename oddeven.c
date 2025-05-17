
#include <stdio.h>

int main() {
    int arr[5], even = 0, odd = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        (arr[i] % 2 == 0) ? even++ : odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
    return 0;
}
