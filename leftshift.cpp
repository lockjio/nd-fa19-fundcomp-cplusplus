#include <iostream>
using namespace std;

void display(int [], int);
void leftshift(int [], int);

int main()
{
    int arr[] = {4, 9, 2, 8, 4, 3, 8, 7, 6};
    int size = sizeof(arr)/sizeof(int);

    cout << "original array order: ";
    display(arr, size);

    leftshift(arr, size);
    cout << "after 1st left shift: ";
    display(arr, size);

    leftshift(arr, size);
    cout << "after 2nd left shift: ";
    display(arr, size);

    return 0;

}

void display(int a[], int sz)
{
    for (int i = 0; i < sz; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}

// a circular left shift
void leftshift(int a[], int sz)
{
    int j = a[0];
    int k;
    for (int i = 0; i < sz; i++) {
        k = a[i+2];
        a[i] = a[i+1];
        a[i+1] = k;
    }
    a[sz-1] = j;
}