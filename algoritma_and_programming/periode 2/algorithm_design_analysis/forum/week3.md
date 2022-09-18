## Merge Sort
### Divide and conquer

Divide and conquer merupakan sebuah metode yang menggambarkan sebuah algoritma yang memecah – mecah data yang kemudian dipecahkan masalahnya lalu kemudian digabungkan kembali. 

## Merge Sort

Algoritma pengurutan berupa merge sort menggunakan konsep divide and conquer dalam menyelesaikan permasalahannya. Dimana data yang ada akan dipecah menjadi dua bagian dan proses ini akan terus berlanjut hingga fragment data yang telah dipecah hanya memiliki satu nilai dan kemudian diproses untuk diurutkan dan digabungkan kembali.



Silahkan teman-teman berikan contoh bagaimana algoritma2 yang menggunakan konsep merge-sort 


## Jawaban
```bash
BEGIN
    Merge(arr,left,mid,right):
        int len1 = mid - left + 1;
        int len2 = right - mid;

        int leftArr[] = new int[len1];
        int rightArr[] = new int[len2];

        FOR (int i = 0; i < len1; i++)
        leftArr[i] = arr[left + i];
        END FOR

        FOR (int j = 0; j < len2; j++)
        rightArr[j] = arr[mid + 1 + j];
        END FOR

        int i, j, k;
        i = 0;
        j = 0;
        k = left;

        WHILE (i < len1 && j < len2) {
        IF (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } ELSE {
            arr[k] = rightArr[j];
            j++;
        }
        END IF
        k++;
        }
        END WHILE

        WHILE (i < len1) {
        arr[k] = leftArr[i];
        i++;
        k++;
        }
        END WHILE

        WHILE (j < len2) {
        arr[k] = rightArr[j];
        j++;
        k++;
        }
        END WHILE
END

BEGIN
    MergeSort(arr, left, right):
        IF left > right 
            return
        END IF
        mid = (left+right)/2
        mergeSort(arr, left, mid)
        mergeSort(arr, mid+1, right)
        merge(arr, left, mid, right)
END



```

## Quick Sort

Quick sort merupakan algoritma pengurutan yang menggunakan konsep divide and conquer. Pada algoritma ini kumpulan data yang mau diurutkan akan dipecahkan berdasarkan pivot-nya. Pivot adalah data pertama dari setiap kumpulan data. 

Silahkan teman-teman berikan contoh bagaimana algoritma2 yang menggunakan konsep quick-sort


## Jawaban
```bash
BEGIN
partition(arr, start, end)
  SET end as pivotIndex
  pIndex = start - 1
  FOR i = start to end-1
  IF arr[i] < pivot
    SWAP arr[i] and arr[pIndex]
    pIndex++
  SWAP pivot and arr[pIndex+1]
  END IF
RETURN pIndex + 1
END

BEGIN
quickSort(arr, start, end)
  IF (start < end)
    pivotIndex = partition(arr,start, end)
    quickSort(arr, start, pivotIndex)
    quickSort(arr, pivotIndex + 1, end)
  END IF
END
```