import java.util.Random;

public class MergeSort {
    public int[] populateArr() {
        int arr[] = new int[10];
        Random r = new Random();
        for (int i = 0; i < 10; i++) {
            arr[i] = r.nextInt(100);
            if (arr[i] == 0) {
                arr[i] += 1;
            }
        }
        return arr;
    }

    public void printArr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

    }

    //selection sort

    public int selectionSort(int arr[]) {

        int numIterSelect = 0;
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }

            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            numIterSelect++;
        }
        return numIterSelect;
    }

    //merge sort
    public int merge(int arr[], int l, int m, int r) {

        int numIterMerge = 1;
        int size1 = m - l + 1;
        int size2 = r - m;


        int lo[] = new int [size1];
        int hi[] = new int [size2];

        for (int i=0; i<size1; ++i) {
            lo[i] = arr[l + i];
        }
        for (int j=0; j<size2; ++j) {
            hi[j] = arr[m + 1+ j];
        }

        int i = 0, j = 0;
        int k = l;
        while (i < size1 && j < size2) {

            if (lo[i] <= hi[j]) {

                arr[k] = lo[i];
                i++;
            }
            else {

                arr[k] = hi[j];
                j++;
            }
            k++;
        }

        while (i < size1) {
            arr[k] = lo[i];
            i++;
            k++;
        }


        while (j < size2) {
            arr[k] = hi[j];
            j++;
            k++;
        }
        return numIterMerge;
    }

    public int mergeSort(int arr[], int l, int r)
    {
        int count = 0;
        if (l < r)
        {
            int m = (l+r)/2;

            count += mergeSort(arr, l, m);
            count += mergeSort(arr , m+1, r);

            count += merge(arr, l, m, r);
        } else {
            return 0;
        }

        return count;
    }
}
