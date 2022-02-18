#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, ele, flag = 0, mid, beg, end;
  printf("No. of elements in array\n");
  scanf("%d", &n);
  int arr[n];
  beg = 0;
  end = n - 1;

  printf("Enter elements in ascending order\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to be searched\n");
  scanf("%d", &ele);

  while (beg <= end) {
    mid = (beg + end) / 2;

    if (arr[mid] == ele) {
      printf("Element found at location %d ", mid + 1);
      flag = 1;
      break;
    }

    else if (arr[mid] < ele) {
      beg = mid + 1;
    }

    else {
      end = mid - 1;
    }
  }
  if (flag == 0) {
    printf("Element not found\n");
  }
}
