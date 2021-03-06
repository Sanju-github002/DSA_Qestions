#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
    stack<pair<int, int>> st;
    st.push({price[0], 1});
    vector<int> ans(n, 1);
      
      int i=1;
      while(i<n)
      {
          int cur=price[i];
          int c=0;
          while(!st.empty() && st.top().first<=cur)
          {
              c+=st.top().second;
              st.pop();
          }
          ans[i]+=c;
          st.push({cur, ans[i]});
          i++;
      }
      
      return ans;
    }
};

int main()
{
 // Done
return 0;
}