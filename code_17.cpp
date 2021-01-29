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
