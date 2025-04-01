class Solution {
    public:
        vector<long long> memo;
        vector<vector<int>> questions;
    
        long long dp(int p) {
            if (memo[p] != -1) return memo[p];
            if(p == memo.size() -1) return questions[p][0];
    
            long long take = (p + 1 + questions[p][1] < memo.size()) ? dp(p + 1 + questions[p][1]) + questions[p][0] : questions[p][0];
            return memo[p] = max(dp(p + 1), take);
        }
    
        long long mostPoints(vector<vector<int>>& q) {
            questions = q;
            int n = questions.size();
            memo = vector<long long>(n, -1);
            return dp(0);
        }
    };
    
    auto init = []() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 'c';
    }();
    