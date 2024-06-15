#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int start=0, endd=9;
    while(start<endd){
        swap(arr[start],arr[endd]);
        start++;
        endd--;
    }
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<",";
    }
}
