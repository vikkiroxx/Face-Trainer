#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int ArrayofInt[100];
    int size;
    int temp;
    //input the unsorted array

    cout << "enter the size of array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Enter at array index " << i << endl;
        cin >> ArrayofInt[i];
    }
    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {

            if (ArrayofInt[i] > ArrayofInt[j]) {
                //swapping with smallest element of array.

                temp = ArrayofInt[j];
                ArrayofInt[j] = ArrayofInt[i];
                ArrayofInt[i] = temp;

            }
        }
    }
    cout << "|sorted array|" << endl;
    for (int i = 0; i < size; i++) {
        cout << ArrayofInt[i] << " ";

    }
    return 0;
}