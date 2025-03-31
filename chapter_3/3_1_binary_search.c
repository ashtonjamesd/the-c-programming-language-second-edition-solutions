#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    
    mid = (low + high) / 2;

    while (low < high && x != v[mid]) {
        if (x < v[mid]) 
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;

        mid = (low + high) / 2;
    }

    return x == v[mid] ? mid : -1;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int y = binsearch(6, arr, 10);
    printf("%d", y);

    return 0;
}