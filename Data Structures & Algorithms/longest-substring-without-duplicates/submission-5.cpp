class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int ans = 0;

        unordered_set<char> st;

        while (r < s.length()) {
            while (st.count(s[r])) {
                // 如何縮小視窗？
                st.erase(s[l]);
                l++;
            }

            // 如何加入新的字元？
            st.insert(s[r]);
            // 如何更新最大長度？
            ans = max(ans,r-l+1);
            r++;
        }

        return ans;
    }
};