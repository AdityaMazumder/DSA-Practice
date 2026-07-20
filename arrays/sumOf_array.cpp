#include <bits/stdc++.h>
using namespace std ; 

int Sum_Arr (vector <int> nums){
    int sum = 0 ;
    for (int i = 0 ; i < nums.size() ; i++){
        sum += nums[i];
    }
    return sum ; 
}

int main(){
    int size ;
    cout<< "Enter size of array :" <<endl; 
    cin>>  size ; 
    vector<int> nums ; 

    for ( int i = 0 ; i < size ; i++){
        cout<<"Enter"<<i+1<<"element : "<<endl ;
        int element ;
        cin>> element ;
        nums.push_back(element);

    }

    int result = Sum_Arr(nums);
    cout<<"Sum of array is :"<< result ;

    return 0 ;

}