/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
class Solution {
public:
    bool existHelper(vector<vector<char>>& board, string word, long long i, long long j, long long ind, vector<vector<bool>>& visited)
    {
        if(ind==word.length()-1)
            return true;
        bool status = false;
        visited[i][j] = true;
        if(i>0 and board[i-1][j]==word[ind+1] and visited[i-1][j]==false)
            status = status or existHelper(board, word, i-1, j, ind+1,visited);
        if(i<board.size()-1 and board[i+1][j]==word[ind+1] and visited[i+1][j]==false)
            status = status or existHelper(board, word, i+1, j, ind+1, visited);
        if(j>0 and board[i][j-1]==word[ind+1] and visited[i][j-1]==false)
            status = status or existHelper(board, word, i, j-1, ind+1,visited);
        if(j<board[0].size()-1 and board[i][j+1]==word[ind+1]and visited[i][j+1]==false)
            status = status or existHelper(board, word, i, j+1, ind+1,visited);
        visited[i][j] = false;
        return status;              
    }
    
    bool exist(vector<vector<char>>& board, string word) {
    
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));
        for( long long i=0;i<board.size();i++)
        {
            for(long long j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    if(existHelper(board,word,i,j,0,visited))
                        return true;
             }
         }
       }
        return false;
    }
};
int main() {
    fast;
    llint t=1, n, a;
    return 0;
}