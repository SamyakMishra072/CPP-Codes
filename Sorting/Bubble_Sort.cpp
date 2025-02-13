#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n) {
    for (int i=n-1;i>=0;i--) {
        int flag=0;
        for (int j=0;j<=i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        if (flag==0) {
            break;
        }
    }
}
int main() {
    cout<<"Enter the Number of Elements for the Array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Applying Selection Sort...\n";
    bubble_sort(arr,n);
    cout << "Sorted Array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}