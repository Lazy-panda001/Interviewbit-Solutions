// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> addOne(vector<int> &a)
    {
        // code here
        vector<int> res;
        
        int sum = (a[n-1] + 1) % 10;
        int carry = (a[n-1] + 1) /10;
        res.push_back(sum);
        
        for(int i=n-2; i>=0; i--)
        {
            sum = (a[i] + carry) % 10;
            carry = (a[i] + carry) / 10;
            res.push_back(sum);
        }
        
        // if at last carry is not 0
        if(carry!=0)
        {
            res.push_back(carry);
        }
        reverse(res.begin(),res.end());
        
        int cnt =0;
        for(int i=0; i<n;i++)
        {
            if(res[i] == 0)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        res.erase(res.begin(),res.begin()+cnt);
        return res;
    }
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

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
        auto ans = ob.addOne(a, n);
        printAns(ans);
    }
    return 0;
}  // } Driver Code Ends
