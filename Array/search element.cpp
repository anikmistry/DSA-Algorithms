#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int index= -1;
    int x;
    cout<<"enter the number that you want to find:"<<endl;
    cin>>x;
    for(int i=0; i<=8; i++){
        if(arr[i]==x){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return index;

}
