class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cookies = s.size();

        if(cookies == 0)
        return 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int maxNum = 0;
        int cookieIndex = cookies - 1;
        int child = g.size() - 1;

        while(cookieIndex >= 0 && child >= 0) {
            if(s[cookieIndex] >= g[child]) {
                maxNum++;
                cookieIndex--;
                child--;
            }
            else {
                child--;
            }
        }
        return maxNum;
    }
};