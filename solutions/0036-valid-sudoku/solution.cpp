class Solution {
public:
    bool rowValidation(vector<vector<char>>& board) {
        unordered_set<char> st;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.')
                    continue;
                else if (!st.count(board[i][j])) {
                    st.insert(board[i][j]);
                } else {
                    return false;
                }
            }
            st.clear();
        }
        return true;
    }

    bool colValidation(vector<vector<char>>& board) {
        unordered_set<char> st;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] == '.')
                    continue;
                else if (!st.count(board[j][i])) {
                    st.insert(board[j][i]);
                } else {
                    return false;
                }
            }
            st.clear();
        }
        return true;
    }
    bool boxValidation(vector<vector<char>>& board) {
        unordered_set<char> st;

        for (int i = 0; i < board.size(); i = i + 3) {
            for (int j = 0; j < board[i].size(); j = j + 3) {
                for (int k = i; k < i+3; k++) {
                    for (int l = j; l < j+3; l++) {
                        if (board[k][l] == '.')
                            continue;
                        else if (!st.count(board[k][l])) {
                            st.insert(board[k][l]);
                        } else {
                            return false;
                        }
                    }
                }
                st.clear();
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        if (rowValidation(board) && colValidation(board) &&
            boxValidation(board))
            return true;

        return false;
    }
};
