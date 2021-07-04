#include <iostream>
#include <stdio.h>

using namespace std;
void merge(int a[], int l, int r, int m)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

   for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];
    int i = 0;
    int j = 0;
    int x = l;
    while (i < n1 && j < n2)
    {
        if (L[i] > R[j])
        {
            a[x] = L[i];
            i++;
        }
        if (R[j] > L[i])
        {
            a[x] = R[j];
            j++;
        }
        x++;
    }

    while (i < n1)
    {
        a[x] = L[i];
        i++;
        x++;
    }
    while (j < n2)
    {
        a[x] = R[j];
        j++;
        x++;
    }
}
void mergesort(int a[], int l, int r)
{
    if (r <= l)
    {
        return;
    }
    int m = (l + r - 1) / 2;
    mergesort(a, l, m);
    mergesort(a, m + 1, r);
    merge(a, l, r, m);
}
int main()
{
    cout << "enter size of array";
    int n,t;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "unsorted array is----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    mergesort(a,0,n-1);
    cout << endl<<"sorted array is----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    cin>>t;
    return 0;
       
}