#include<iostream>
using namespace std;
vector<int> merge(vector<int> arr1, vector<int>& v2, vector<it>& v3){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> v(m+n);
    int i=0;
    int j=0;
    int k=0;
   while(i<=n1 && j<=m){
    if(arr1[i]<arr2[j]){
        res[k] = arr1[i];
        i++;
        
    }
    else{
        res[k] = arr2[j];
        j++;

    }
    k++;
   }
   if(j==m){
    while(i<=n-1){
        res[k] = arr1[i];
        k++;
        i++;
    }
   }
}
int main(){

}