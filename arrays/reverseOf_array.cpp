#include<bits/stdc++.h>
using namespace std ;

vector<int> reverse_arr ( vector<int> nums , int n ){
    int i = 0 ;
    int j = n-1 ;

    while ( i <= j){

        swap(nums[i] , nums[j]);

        i++ ;
        j-- ;
    }
    return nums ;
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

    vector<int> result = reverse_arr(nums , n );

    cout<<"The reverse of the array is : ";

    for ( int i = 0 ; i < n ; i++){


        
        cout<<result[i]<<" " ;
        
        
    }
    

    return 0 ;


}