class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int N = s2.length();
        vector<int> cnt1(26,0);
        for (auto c : s1){
            cnt1[c - 'a']++;
        }

        for (int l = 0  ; l + n <= N ; l++){
            string s = s2.substr(l,n);
            vector<int> cnt2(26,0);
            for (auto c : s){
                cnt2[c - 'a']++;
            }
            if (cnt1 == cnt2) return true;
        }
        return false;
    }
};
