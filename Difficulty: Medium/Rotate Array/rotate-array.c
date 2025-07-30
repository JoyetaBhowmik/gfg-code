// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array by d elements in a counter-clockwise direction
void rotateArr(int arr[], int n, int d) {
    d = d % n; // Handle the case when d >= n

    // Reverse the first d elements
    reverse(arr, 0, d - 1);

    // Reverse the last n-d elements
    reverse(arr, d, n - 1);

    // Reverse the whole array
    reverse(arr, 0, n - 1);
}