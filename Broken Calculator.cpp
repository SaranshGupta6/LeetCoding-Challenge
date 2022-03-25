 int brokenCalc(int startValue, int target) {
       // Work backwards from target -> startValue. For multiplication -> division, subtraction -> addition
// TC : O(logn)
// SC : O(1)
        int res = 0;
        while (target > startValue) {
            if (target%2 == 1)
                target += 1;
            else
                target /= 2;
            res += 1;
        }
        res += (startValue - target);
        return res;
       }
