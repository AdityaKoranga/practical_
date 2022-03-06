//merge two ordered array and to form a single ordered array
#include<bits/stdc++.h>
using namespace std;
void merge_array(int arr1[],int m,int arr2[],int n,int arr3[]){
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<m){
        arr3[k++]=arr1[i++];
    }
    while(j<n){
        arr3[k++]=arr2[j++];
    }

}
void print(int arr3[],int size){
    for(int i=0;i<size;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,3,4,6,7};
    int arr2[6]={2,5,8,9,};
    int arr3[11]={0};
    merge_array(arr1, 5, arr2, 6, arr3);
    print(arr3,11);
return 0;
}
