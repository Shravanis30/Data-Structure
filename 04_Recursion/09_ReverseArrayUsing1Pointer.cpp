
#include<iostream>
#include<math.h>
using namespace std;

void Display(int arr[], int n, int i) {

    if(i >= n/2) {
        return;
    }

    swap(arr[i], arr[n-i-1]);

    Display(arr, n, i + 1);


}

int main() {

    int n;
    cout << "Enter the no of element in array : ";
    cin >> n;
    int arr[n]; //{1 2 3 4 5}

    cout << "Enter elements : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Display(arr, n, 0);

    cout << "Reversed array is : ";
    for(int i = 0; i < n; i++) {
        cout  << arr[i] << " ";
    }
    cout << endl;
   return 0;

}