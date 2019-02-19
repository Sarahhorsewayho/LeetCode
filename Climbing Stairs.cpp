class Solution {
public:
    int climbStairs(int n) {
        const int ROW_NUM = n/2 + 1;
        const int LINE_NUM = n;
        int step[ROW_NUM +  1][LINE_NUM + 1];
        int sum = 0;
        for (int i = 0; i < ROW_NUM; i++) {
            for (int j = 0; j < LINE_NUM - 2 * i + 1 ; j++) {
                step[i][j] = 0;
            }
        }
        step[0][0] = 1;
        for (int i = 0; i < ROW_NUM; i++) {
            for (int j = 0; j < LINE_NUM - 2 * i ; j++) {
                step[i][j + 1] += step[i][j];
                step[i+1][j] += step[i][j];
            }
        }
        for (int i = 0; i < ROW_NUM; i++) {
            sum += step[i][LINE_NUM - 2 * i];
        }
        return sum;
    }
};