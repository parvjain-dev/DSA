class Solution {
public:
    int reverse(int x) {
        long long revDig = 0;
        long long i = x;
        if (x < 0)
            i = i * -1;

        while (i > 0) {

            int temp = i % 10;
            revDig = revDig * 10 + temp;
            i = i / 10;
        }
        if (x < 0)
            revDig = revDig * -1;

        if (revDig > INT_MAX || revDig < INT_MIN)
            return 0;
        return (int)revDig;
    }
};
