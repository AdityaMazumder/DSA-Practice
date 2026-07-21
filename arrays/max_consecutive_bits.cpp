// this is a program to return the maximum number of consecutive bits in a binary array 
// ex : arr = [1 ,1 ,1 , 0 ,1 , 1 , 0]
// max consecutive bits = 3 , since 1 appears the most ( three times ) consectively

#include<bits/stdc++.h>
using namespace std;

int max_consec (vector<int> nums , int n ){
    int count = 1 ;
    int max_bits = 1 ;

    for ( int i =1 ; i < n ; i++){
        if(nums[i] ==nums[i-1]){
            count += 1;
        }else {
            count = 1 ;
        }
        max_bits = max(max_bits , count);
    }
    return max_bits ;
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

    cout<<"The maximum numbe of consecutive bits in the given binary array is : "<<max_consec(nums , n) ; 

    return 0 ;
}