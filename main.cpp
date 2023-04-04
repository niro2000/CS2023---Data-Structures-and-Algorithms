#include <iostream>
//#include <vector>
#include <algorithm>
#include <chrono>

using  namespace std ;
using namespace std::chrono;



 int top =-1;
 int n=25;
 //int stack[n];

void display(int* arr) {
    for (int i = 0; i < top+1; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}


void pop(){
  
  if (top==-1){
    cout<<"stack is empty \n";
  }
  else{
    top=top-1;
}
  if (top<-1){
    top =-1;
  }

}


void push(int* arr,int value){

  top =top+1;
  if(top>n-1){
   top=top-1;
   cout<<"stack over flow \n"; 
    
  }
  arr[top]=value;
}

int main() {
 
  
  int myArray[n];







    auto start = high_resolution_clock::now();
   
     

  push(myArray,8);
 push(myArray,10);
 push(myArray,5);

   push(myArray,11);
 push(myArray,15);
 push(myArray,23);
  
  
  push(myArray,6);
 push(myArray,18);
 push(myArray,20);

  
  push(myArray,17);
 
  
  display(myArray);
  
  pop();
 pop();
pop();
pop();
pop();

  
  display(myArray);

   push(myArray,4);
 push(myArray,30);
 push(myArray,3);
  push(myArray,1); 
  

display(myArray);
  
 auto stop = high_resolution_clock::now();
  
    
    
    auto duration = duration_cast<microseconds>(stop - start);

    
    cout  << duration.count() << "   microseconds";
  

}