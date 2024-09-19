class Solution {
public:
    long long positiveNum(string &nums)
    {
        string numbers, zero;
        for(auto ch:nums)
            ch == '0' ? zero += ch : numbers += ch;
        sort(begin(numbers), end(numbers));
        numbers.insert(1, zero);
        return stoll(numbers);
    }
    long long smallestNumber(long long num) {
        if(num == 0) return 0;
        string nums = to_string(num);
        if(nums[0] == '-')
        {
            sort(nums.rbegin(), nums.rend());
            return - stoll(nums);
        }
        return positiveNum(nums);
    }
};