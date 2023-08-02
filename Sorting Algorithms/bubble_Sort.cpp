#include<iostream>
#include<algorithm>
using namespace std;
void bubble_Sort(int[],int);
int main(){
    int arr[]={34,23,56,8,43,54,2,3,4,5,65,12};
    bubble_Sort(arr,12);
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_Sort(int arr[],int n){
     
     for(int round=1;round<=n-1;round++){
        for(int i=0;i<=n-round;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
     }
     

}