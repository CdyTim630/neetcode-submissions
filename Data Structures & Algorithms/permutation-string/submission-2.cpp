class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int N = s2.length();
        if (n > N) return false;

        vector<int> cnt1(26, 0);
        for (char c : s1) cnt1[c - 'a']++;

        // 【改動 1】把 cnt2 提到迴圈外面，只建一次
        vector<int> cnt2(26, 0);

        for (int r = 0; r < N; r++) {
            // 【改動 2】直接加入右邊新字元，取代 substr 與內層迴圈
            cnt2[s2[r] - 'a']++;

            // 【改動 3】視窗超過長度 n 時，踢掉最左邊的舊字元 (r - n)
            if (r >= n) cnt2[s2[r - n] - 'a']--;

            if (cnt1 == cnt2) return true;
        }
        return false;
    }
};
