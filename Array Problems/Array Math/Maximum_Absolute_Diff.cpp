#include <bits/stdc++.h> 
using namespace std; 



 // } Driver Code Ends


class Solution{
  public:
    int maxDistance(vector<int> &nums[]) 
    { 
        // Complete the function
        //int n = nums.size();
    int max_1 = INT_MIN; int min_1 = INT_MAX;
    int max_2 = INT_MIN; int min_2 = INT_MAX;
    
    for(int i=0; i<n; i++)
    {
        // 1st case
        max_1 = max(max_1, nums[i] + i);
        min_1 = min(min_1, nums[i] + i);
        
        // 2nd case
        max_2 = max(max_2, nums[i]- i );
        min_2 = min(min_2, nums[i]- i );
        
        //return max(max_1 - min_1, max_2 - min_2)
    }
    int ans1 = max_1 - min_1;
        int ans2 = max_2 - min_2;
        return max(ans1,ans2);
    } 
};

// { Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr)<<endl;
	}
} 
  // } Driver Code Ends
