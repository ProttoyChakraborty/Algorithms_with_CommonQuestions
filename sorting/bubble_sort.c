#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[],int n){
    int flag = 0;
    for (int i = 0; i < n - 1;i++){
        for (int j = 0; j < n -i-1;j++){
            if(arr[j]>arr[j+1]){
                int t= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = 1;
            }
        }
        if(flag==0){
            return;
        }
    }
    return;
}
int main(){

    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);

    }
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

        return 0;

}