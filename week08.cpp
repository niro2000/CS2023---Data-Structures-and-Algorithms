#include <iostream>
using namespace std;


void swap(int& a ,int& b){
 int temp =a;
 a=b;
 b=temp;
  
}

// function to heapify the tree
void heapify(int arr[], int n, int root)
{
   // build heapify
  int largest = root;
  int left =root*2+1;
  int right = root*2+2;

  if (left<n && arr[left]>arr[largest]){
    largest=left;
  }

    if (right<n && arr[right]>arr[largest]){
    largest=right;
  }

  if(largest!=root){
    swap(arr[largest],arr[root]);
    heapify(arr,n,largest);
  }
  
   
}
  
// implementing heap sort
void heapSort(int arr[], int n)
{
   // build heap
   for (int i = n / 2 - 1; i >= 0; i--)
     {
       heapify(arr, n, i);

       
     } 
  
   // extracting elements from heap one by one
   for (int i = n - 1; i > 0; i--) {
         swap(arr[0], arr[i]);
         heapify(arr, i, 0);
    }
}
  
/* print contents of array */
void displayArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
   cout << arr[i] << " ";
   cout << "\n";
}
  
// main program
int main()
{
   int heap_arr[] = {5, 12, 3, 8, 9, 1, };
   int n = sizeof(heap_arr)/sizeof(heap_arr[0]);
 
  
   cout<<"Input array"<<endl;
   displayArray(heap_arr,n);
  
   heapSort(heap_arr, n);
  
   cout << "Sorted array"<<endl;
   displayArray(heap_arr, n);
}
