class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<int>dx = {0, 1, 1, 1, 0, -1, -1, -1};
        vector<int>dy = {1, 1, 0, -1, -1, -1, 0, 1};

        //BRUTE FORCE SOLUTION -> EXTRA SPACE

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         int x=i,y=j,cnt=0;
        //         for(int k=0;k<8;k++){
        //             int new_x = x+dx[k];
        //             int new_y = y+dy[k];
        //             if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && board[new_x][new_y]==1){
        //                 cnt++;
        //             }
        //         }
        //         if(board[i][j]==0 && cnt==3){
        //             ans[i][j]=1;
        //         }
        //         else if(board[i][j]==1 && cnt<2){
        //             ans[i][j]=0;
        //         }
        //         else if(board[i][j]==1 && (cnt==2 || cnt==3)){
        //             ans[i][j]=1;
        //         }
        //         else if(board[i][j]==1 && cnt>3){
        //             ans[i][j]=0;
        //         }
        //         else{
        //             ans[i][j]=board[i][j];
        //         }
        //     }
        // }

        
        // board=ans;

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<ans[i][j]<<\ \;
        //     }
        //     cout<<\\
\;
        // }


        //OPTIMIZED SOLUTIN - IN PLACE
        // before     after     value
        // 0          0         0
        // 1          1         1
        // 0          1         2
        // 1          0         3
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x=i,y=j,cnt=0;
                for(int k=0;k<8;k++){
                    int new_x = x+dx[k];
                    int new_y = y+dy[k];
                    if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && (board[new_x][new_y]==1 || board[new_x][new_y]==2)){
                        cnt++;
                    }
                }
                if(board[i][j]==0 && cnt==3){
                    board[i][j]=3;
                }
                else if(board[i][j]==1 && cnt<2){
                    board[i][j]=2;
                }
                else if(board[i][j]==1 && (cnt==2 || cnt==3)){
                    board[i][j]=1;
                }
                else if(board[i][j]==1 && cnt>3){
                    board[i][j]=2;
                }
                else{
                    ans[i][j]=board[i][j];
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==2){
                    board[i][j]=0;
                }
                else if(board[i][j]==3){
                    board[i][j]=1;
                }
            }
        }

    }
};