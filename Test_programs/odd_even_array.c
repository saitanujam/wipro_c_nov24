// Converting odd elements to even by adding 1 and even to odd by substracting 1
#include <stdio.h>

int main() {
    int n = 0, i = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] - 1;
        }
        else {
            arr[i] = arr[i] + 1;
        }
    }
    printf("The elements of array after changing is = ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
}