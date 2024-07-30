class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n = v.size();
        int cnt = 0; 
        int chk;

    
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                chk = v[i];
            }
            else if (chk == v[i]) cnt++;
            else cnt--;
        }  
        int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == chk) cnt1++;
    }

    if (cnt1 > (n / 2)) return chk;
    return -1;
    }
};
