class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end()) + 1;

        int ans = 0;
        while (l<r){
            int mid = l + (r-l)/2;

            int t = 0;
            for (auto v : piles){
                t += ceil(static_cast<double>(v)/mid);
                
            }
            cout << mid  <<endl;
            if (t <= h){
                r = mid;
                ans = mid;
            }

            else l = mid + 1;
        }

        return ans;
    }
};
