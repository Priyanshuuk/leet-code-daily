class Solution {
    // private:
    // int fxn(vector<int>& dp , vector<int>& nums , int n ,int par){
    //         // base cases

    //         if(dp[n]!=-1) return dp[n];

    //         int nottake = fxn(dp, nums,n-1);

    //         int take = -1e9;
    // }
public:
    int maximumLength(vector<int>& nums) {
        //first approcch to iterate over the array and do as it says
        //cant do anything if the subsequence is after first 2 element //thus this method fail

        // if the subsequence can be anywhere i am thinking to go towards dp to check all pooible sequence
        //cant think of the parameter of matrix



        //reference link https://youtu.be/pFJpeI-0fdk?si=EqmMxsHqONmjt38-
        vector<int>parioty;
        for(int i = 0 ; i < nums.size();i++){
            parioty.push_back(nums[i]%2);
        }

        int alleven = count(parioty.begin(), parioty.end() , 0);
        int alodd =  count(parioty.begin(), parioty.end() , 1);

            int alt_even = 0;
            int expected = 0;
            for (int num : nums) {
                if (num % 2 == expected) {
                    alt_even++;
                    expected ^= 1;
                }
            }

            int alt_odd = 0;
            int expected2 = 1;
            for (int num : nums) {
                if (num % 2 == expected2) {
                    alt_odd++;
                    expected2 ^= 1;
                }
            }


        return max({alleven, alodd,alt_odd , alt_even});

    }
};