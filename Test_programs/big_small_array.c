// Find biggest and smallest elements of in an array
#include <stdio.h>

int main() {
    int n = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double large = 0.0, small = 0.0;
    double arr[n];

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    large = small = arr[0];

    for(int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
        if(arr[i] < small) {
            small = arr[i];
        }
    }
    printf("Largest number of array = %.2lf\n", large);
    printf("Smallest number of array = %.2lf\n", small);

}