#include<bits/stdc++.h>
using namespace std;

//partition function
int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];    //pivot element
    int i = low;   //pointers
    int j = high;

    while(i<j){
        //i is increased from left until a number greater than pivot is found
       while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        // j ko piche lao jab tak chhota element na mile, limit low+1 tak
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        // agar cross nahi kiya toh swap karo
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }

    //pointers cross hote hee, change the place of pivot with j
    swap(arr[low], arr[j]);
    return j;    //index of pivot at correct place
}

//quicksort function

void quickSort(vector<int>& arr, int low, int high){
    //base case
    if(low>= high)return;

    int pIndex = partition(arr, low, high); //correct index of pivot

    //left part par quicksort dubara
    quickSort(arr, low, pIndex - 1);
    //right part
    quickSort(arr, pIndex + 1, high);
}

int main(){
    vector<int> arr = {4,6,2,5,7,9,1,3};

    int n = arr.size();
    cout << " the array to be sorted: ";

    for(int x:arr){
        cout << x << " ";
    }

    //call the quicksort function
    quickSort(arr, 0, n-1);
    cout << "sorted array: ";
    for(int x: arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;

}