// selection sort means select the minimums and swap it with the first element and then select the second minimum and swap it with the second element and so on
// time complexity is O(n^2)

#include <iostream>
#include <vector>
using namespace std;

// void selectionSort(int a[], int n)
// {

//     for (int i = 0; i < n-1; i++)
//     {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++)
//         {

//             if (a[minIndex] > a[j])
//             {
//                 minIndex = j;
//             }
//         }

//         swap(a[i], a[minIndex]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     selectionSort(a, n);

//     return 0;
// }

// bubble sort best case TC-O(n) already sorted , for worst and average case its O(N^2)

// void bubbleSort(int a[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     bubbleSort(a, n);

//     return 0;
// }

// insertion sort takes element and place to correct place
// time complexity is O(N^2) in worst and average case and O(N) in best case

// void insertionSort(int a[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         int j = i;
//         while (j > 0 && a[j - 1] > a[j])
//         {
//             swap(a[j - 1], a[j]);
//             j--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     insertionSort(a, n);

//     return 0;
// }

// merge sort basically divides and merge

// void merge(int a[], int low, int mid, int high)
// {

//     int left = low;
//     int right = mid + 1;
//     vector<int> temp;

//     while (left <= mid && right <= high)
//     {
//         if (a[right] < a[left])
//         {
//             temp.push_back(a[right]);
//             right++;
//         }
//         else
//         {
//             temp.push_back(a[left]);
//             left++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp.push_back(a[left]);
//         left++;
//     }

//     while (right <= high)
//     {
//         temp.push_back(a[right]);
//         right++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         a[i] = temp[i - low];
//     }
// }

// void mergeSort(int a[], int low, int high)
// {

//     if (low == high)
//     {
//         return;
//     }

//     int mid = (low + high) / 2;

//     mergeSort(a, low, mid); // time complexity is O(logn) because we are dividing the array into two halves worst and average case and O(1) in best case because we are already sorted
//     mergeSort(a, mid + 1, high);
//     merge(a, low, mid, high); // time complexity is O(n) because we are merging two halves of the array
// }
// space complexity is O(n) because we are using temporary array to merge the two halves of the array
// // overall time complexity is O(nlogn) in worst and average case and O(n) in best case because we are already sorted

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];
//     int low = 0;
//     int high = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     mergeSort(a, low, high);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// quick sort is also a divide and conquer algorithm but it uses pivot element to partition the array into two halves and then recursively sort the two halves
// time complexity is O(nlogn) in worst and average case and O(n) in best case because we are already sorted
// how sc o(1) because we are not using any extra space to sort the array
// how tc is O(n^2) in worst case because if we are always selecting the last element as pivot and the array is already sorted then we will have to compare each element with the pivot and then swap it with the pivot which will take O(n) time and we will have to do this for n elements which will take O(n^2) time
// int func(int a[], int low, int high)
// {
//     int i = low;
//     int j = high;
//     int pivot = a[low];

//     while (i < j)
//     {
//         while (i < high && a[i] <= pivot)
//         {
//             i++;
//         }

//         while (j > low && a[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {

//             swap(a[i], a[j]);
//         }
//     }

//     swap(a[low], a[j]);
//     return j;
// }

// void quick_Sort(int a[], int low, int high)
// {

//     if (low < high)
//     {
//         int partial = func(a, low, high);

//         quick_Sort(a, low, partial - 1);
//         quick_Sort(a, partial + 1, high);
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];
//     int low = 0;
//     int high = n-1;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     quick_Sort(a, low, high);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

