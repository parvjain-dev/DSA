class Solution {
public:
    bool canTransform(string start, string result) {
        if (start.size() != result.size()) {
            return false;
        }
        int startI = 0, resultI = 0;
        while (startI < start.size() && resultI < result.size()) {
            while (startI < start.size() && start[startI] == 'X') {
                startI++;
            }
            while (resultI < result.size() && result[resultI] == 'X') {
                resultI++;
            }
            if (startI == start.size() && resultI == result.size())
                return true;
            else if (startI == start.size() || resultI == result.size())
                return false;
            if (start[startI] != result[resultI]) {
                return false;
            }
            if (start[startI] == 'R') {
                if (startI > resultI) {
                    return false;
                }
            } else {
                if (startI < resultI) {
                    return false;
                }
            }
            startI++;
            resultI++;
        }
        //    if(startI!=resultI) return false;
        while (startI < start.size()) {
            if (start[startI] != 'X') {
                return false;
            }
            startI++;
        }
        while (resultI < result.size()) {
            if (result[resultI] != 'X') {
                return false;
            }
            resultI++;
        }
        return true;
    }
};
