class Solution {
public:

    int check(int i)
    {
        int temp = 0;
        while(i>0)
        {
            i = i/10;
            temp++;
        }
        return temp;
    }

    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int i: nums)
        {
            if(check(i) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};