class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> cnt(26,0);
        int l = 0,r = 0;
        int maxFreq = 0, maxLen = 0;

        while ( r < s.length() ){
            cnt[s[r] - 'A']++;
            maxFreq = max(maxFreq, cnt[s[r] - 'A']);

            if ( r - l - maxFreq + 1 > k){
                cnt[s[l] - 'A']--;
                l++;
            } 

            maxLen = max(maxLen, r - l + 1);
            r++;
        }

        return maxLen;
    }
};
