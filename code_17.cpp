class Solution{   
public:
    int getPairsCount(int arr[], int n, int k)
    {
        int res=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(2*arr[i]==k)
            {
                res=res+max(mp[arr[i]]-1,0);
            }
            else
            {
                res=res+mp[k-arr[i]];
            }
        }
        return res/2;
        
    }
};


method 2
    
    class Solution{   
public:
    int getPairsCount(int arr[], int n, int k)
    {
        int twice_count=0;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for (int i = 0; i < n; i++) {
            twice_count += m[k - arr[i]];

            // if (arr[i], arr[i]) pair satisfies the condition,
            // then we need to ensure that the count is
            // decreased by one such that the (arr[i], arr[i])
            // pair is not considered
            if (k - arr[i] == arr[i]) twice_count--;
        }
        return twice_count / 2;
    }
};
