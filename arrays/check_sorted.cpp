#include<bits/stdc++.h>
using namespace std ;

bool check_sort (vector<int> nums , int n){

    for ( int i = 1 ; i < n ; i++){
        if ( nums[i] < nums[i-1]){
            return false ;
        }
    }
    return true ;

}

int main(){
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

    bool result = check_sort(nums , n);
    if( result == true ){
        cout<<"Array is sorted";
    }else {
        cout<<"Array is not sorted";
    }

    return 0 ;
}