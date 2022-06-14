// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(int *arr, int n) {
        // code here
        vector<int> ans;
        int m=100001;
        int ha[m];
        for(int i=0;i<m;i++){
            
            ha[i]=0;
            
        }
        
        
        for(int i=0;i<n;i++){
            ha[arr[i]]=ha[arr[i]]+1;
            
            
        }
        
        for(int i=0;i<n;i++){
            if(ha[i]==2){
                ans.push_back(i);
            }
            if(ha[i]==0){
                ans.push_back(i);
            }
            
            
        }
        
        
        return ans;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends