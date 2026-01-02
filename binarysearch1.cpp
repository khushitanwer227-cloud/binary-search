#include<iostream>
using namespace std;


// int binarySearch (int arr[] , int size , int key) {

//   int start = 0;
//   int end =  size - 1;

//   int mid =  start + (end - start)/2;
  
//   while(start <= end)
//   {
//       if(arr[mid] == key)
//       { return mid; }
//     // go to right wala part
//       if(key > arr[mid]){
//         start = mid + 1;
//        }
//        else{ 
//         end = mid - 1;
//        }
//         mid = start + (end - start)/2;
//   }

//   return -1;
// }


// int main()
// {

// int even[6] = {2, 4 ,6 , 8 , 12 , 18};
// int odd[5] = {3, 8 , 11 , 14 , 16};


// int evenIndex = binarySearch(even , 6 , 12);

// cout<<"Index of 12 is " << evenIndex << endl;
  

// int oddIndex = binarySearch(odd , 5 , 11);

// cout<<"Index of 11 is " << oddIndex << endl;

// return 0;

//  }


  
// int  firstOcc(int arr[] , int n , int key){

//        int  s = 0, e = n - 1;
//        int mid = s + ( e - s)/2;
//        int ans = -1;
//        while(s<=e){
//           if (arr[mid]== key ){
//             ans = mid ;
//             e = mid - 1;
//           }
//           else if (key > arr[mid]){
//             s = mid + 1;
//           }
//           else if (key < arr[mid]){
//             e = mid - 1;
//           }
//           mid = s + (e - s)/2;
//        }
//        return ans;

// }
 
// int main(){

//     int even[5] = {1 , 2, 3, 3, 5};
//     cout<< "first occurrence of 3 is at index "<< firstOcc(even , 5 , 3)<< endl; 

// }



int  lastOcc(int arr[] , int n , int key){

       int  s = 0, e = n - 1;
       int mid = s + ( e - s)/2;
       int ans = -1;
       while(s<=e){

          if (arr[mid]== key ){
            ans = mid ;
            s = mid + 1;
          }
          else if (key > arr[mid]){
            s = mid + 1;
          }
          else if (key < arr[mid]){
            e = mid - 1;
          }
          mid = s + (e - s)/2;
       }
       return ans;

}
 
int main(){

    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout<< "last occurrence of 3 is at index "<< lastOcc(even , 11 , 3)<< endl; 

}











