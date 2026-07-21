#include<bits/stdc++.h>
using namespace std ;


// returns -1 if no second largest element 
int second_Largest(vector<int> nums , int n ){
    int largest = nums[0];
    int second_largest = -1 ;
    for (int i = 0 ; i < n ; i++){
        if(nums[i] > largest){
            second_largest = largest ; 
            largest = nums[i] ; 
        }else if ( nums[i] > second_largest && nums[i] < largest){
            second_largest = nums[i] ;
        }
    }

    return second_largest ;
}

int main(){

    // creating array by taking input 
    int n  ;
    cout<<"Enter the number of elements of the array : "<<endl ;
    cin>> n ;
    vector<int> nums ; 

    for ( int i = 0 ; i < n ; i++){
        int element ; 
        cout<<"Enter "<<i+1<<" element of the array : ";
        cin>>element ; 
        nums.push_back(element);
    }

    cout<<"The second largest element of the array is : "<<second_Largest(nums , n) ; 

    return 0 ;
}