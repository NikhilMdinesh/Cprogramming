#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
int largest=arr[0];
int second_largest=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>largest)
    {
        second_largest=largest;
        largest=arr[i];
    }
    else if (arr[i]>second_largest && arr[i]!=largest)
    {
        second_largest=arr[i];
    }
}
    printf("second largest number is:%d",second_largest);

}