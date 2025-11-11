#include <stdio.h>
void reverseArray(int arr[], int n) {
int start = 0;
int end = n - 1;
 int temp;
while (start < end) {
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
}
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n]; 
printf("Enter %d 2-digit numbers:\n", n);
for (int i = 0; i < n; i++) {
printf("Element %d: ", i + 1);
scanf("%d", &arr[i]);
}
}
printf("\nOriginal array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
reverseArray(arr, n);
printf("Reversed array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");

    return 0;
}