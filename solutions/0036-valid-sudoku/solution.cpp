class Solution {
public:
    bool rowValidation(vector<vector<char>>& board) {

        for (int i = 0; i < board.size(); i++) {
            vector<int> freq(10, 0);
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.') {
                    continue;
                } else if (freq[board[i][j] - '0'] == 1) {
                    return false;
                } else {
                    freq[board[i][j] - '0']++;
                }
            }
        }
        return true;
    }

    bool colValidation(vector<vector<char>>& board) {

        for (int i = 0; i < board.size(); i++) {
            vector<int> freq(10, 0);
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] == '.') {
                    continue;
                } else if (freq[board[j][i] - '0'] == 1) {
                    return false;
                } else {
                    freq[board[j][i] - '0']++;
                }
            }
        }
        return true;
    }
    bool boxValidation(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i = i + 3) {
            for (int j = 0; j < 9; j = j + 3) {
                vector<int> freq(10, 0);
                for (int k = i; k < i + 3; k++) {
                    for (int l = j; l < j + 3; l++) {
                        if (board[k][l] == '.') {
                            continue;
                        } else if (freq[board[k][l] - '0'] == 1) {
                            return false;
                        } else {
                            freq[board[k][l] - '0']++;
                        }
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        if(rowValidation(board)&&colValidation(board) && boxValidation(board)){
            return true;
        }
        return false;
    }
};
