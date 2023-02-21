#include <iostream>

void bubble_sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
      if(arr[i] > arr[i+1])
      {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }

      if(i == len - 1)
      {
        bubble_sort(arr, len - 1);
      }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
