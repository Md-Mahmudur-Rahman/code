#include <stdio.h>
int main()
{
      int temp = 0, i, j, arr[] = {122, 126, 126, 132, 130, 129, 133, 134, 136, 140, 143, 144, 148, 149, 148, 133, 133, 133, 147, 136};
      for (i = 0; i < 20; i++)
      {
            for (j = i + 1; j < 20; j++)
            {
                  if (arr[i] > arr[j])
                  {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }
      for (i = 0; i < 20; i++)
      {
            printf("%d\n", arr[i]);
      }
}