#include<bits/stdc++.h>
using namespace std ;

int  mean_arr (vector<int> nums , int n ){
    double sum = 0 ;


    for ( int i = 0 ; i < n ; i++){
        sum += nums[i];
    }
    double  mean = sum / n ;
    return mean ; 
}

int main (){
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>> n ;
    vector<int> nums ; 

    for ( int i = 0 ; i < n ; i++){
        int element ;
        cout<<"Enter the "<<i+1<<" element :"<<endl ;
        cin>>element ;
        nums.push_back(element);
    }

    double result = mean_arr(nums , n );
    cout<<"The mean of the array is : "<<result ;

    return 0 ;


}