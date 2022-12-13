class Solution{
    public:
    
    bool ispossible(int nx , int ny , vector<vector<int>> &m, int n , vector<vector<int>> visited){
        
        if( (nx>=0 && nx<n) && (ny>=0 && ny<n) && (visited[nx][ny]== 0) && (m[nx][ny] == 1)) return true;
        else return false;
    }
    void solve(vector<vector<int>> &m, int n , int x , int y , vector<string>& ans, string path ,vector<vector<int>> visited){
        
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y]= 1;
        
        //d l r u 
        
        //down ja sakte kya 
        int newx = x+1;
        int newy = y;
        if(ispossible(newx , newy , m , n , visited)){
            path.push_back('D');
            solve(m,n,newx,newy,ans,path,visited);
            path.pop_back();
        }
        
        //left ja sakte kya 
        newx = x;
        newy = y-1;
        if(ispossible(newx , newy , m , n , visited)){
            path.push_back('L');
            solve(m,n,newx,newy,ans,path,visited);
            path.pop_back();
        }
        
        //right ja sakte kya
         newx = x;
         newy = y+1;
        if(ispossible(newx , newy , m , n , visited)){
            path.push_back('R');
            solve(m,n,newx,newy,ans,path,visited);
            path.pop_back();
        }
        
        //u ja sakte kya 
        newx = x-1;
        newy = y;
        if(ispossible(newx , newy , m , n , visited)){
            path.push_back('U');
            solve(m,n,newx,newy,ans,path,visited);
            path.pop_back();
        }
        
        visited[x][y]= 0;
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string> ans;
       
       if(m[0][0] == 0) return ans;
       
       vector<vector<int>> visited = m;
       
       for(int i = 0  ;i <n; i++)
           for(int j = 0 ; j<n ; j++)
               visited[i][j] = 0;
           
       
       
       string path = "";
       solve(m,n,0,0,ans,path,visited);
       sort(ans.begin() , ans.end());
       return ans;
       
    }
};
