class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        for(const string& s : arr) {
            freq[s]++
        }
        vector<string> res;
        for(const string& s : arr) {
            if(freq[s] == 1) {
                res.push_back(s);
            }
        }
        if(k > res.size()) {
            return "";
        }
        return res[k-1];
    }
};
