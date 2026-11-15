class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> s_cnt,t_cnt;
        for (auto i : s){
            s_cnt[i]++;
        }
        for (auto i : t){
            t_cnt[i]++;
        }

        return ( s_cnt == t_cnt );

    }
};
