class Solution{
public:
void reverseInGroups(vector<long long>& arr, int n, int k){
    for(int i=0; i<n; i++){
        int left == i;
        int right = min(i+k-1; n-1);
        while(left<right){
            swap(arr[left++], arr[right--]);
        }

    }
    
    }
    };
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<long long> arr;
            int k;
            cin>>k;
            for(long long i =0; i<n; i++)
            {
                long long x;
                cin>>x;
                arr.push_back(x);
            }
            Solution ob;
            ob.reverseInGroups(arr,n,k);
            for(long long i = 0; i<n; i++){
                cout<<arr[i]<<"";
            }
            cout<<endl;
        }
        return 0;
    }