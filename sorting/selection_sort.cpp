#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout << "Enter the No of Elements\n";
    cin >> n;
    int arr[n];
  
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout << "unsorted array is -->";
    for (int i = 0; i < n; i++)
        cout <<" "<< arr[i];
    cout << endl;

    for (int i = 0; i < n;i++)
    {
        int current =i;
        int currentMin=i;
        for (int j = i; j < n;j++)
        {
            if (arr[j]<arr[currentMin])
                currentMin = j;
        }
        int t;
        t = arr[current];
        arr[current]=arr[currentMin];
        arr[currentMin] = t;
    }

    cout << "sorted array is -->";
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
    cout << endl;

    cin >> x;
    return 0;
}