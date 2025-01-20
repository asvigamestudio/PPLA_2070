#include <iostream>
using namespace std;

int main(){
              // 0  1  2  3  4  5  6  7  8  9
    int arr[] = {4, 8, 1, 5, 9, 0, 2, 7, 3, 6};
    int length = 10;

    //print unsorted array
    cout << "unsorted array: ";
    for(int i = 0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //apply bubble sort
    for(int i = 0; i < length - 1; i++){
        for(int j=0; j < length - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Diedit oleh raphael

    // 4 8 1 5 9 7
    // 4 1 5 8  7

    //print sorted array
    cout << "sorted array  : ";
    for(int i = 0; i<length; i++){
        cout << arr[i] << " ";
    }

    return 0;
}