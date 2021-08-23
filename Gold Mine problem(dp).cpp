int mem[52][52];

int calcMaxGold(int x, int y, int n, int m , vector<vector<int> > &M){

//If we get out of bounds we return 0
if(x >= n || y >= m || x<0)return 0;

//We are filling mem table from the end
//So when we are at the last col, we will have to take that gold in the particular cell(because here we don't have any choice)

if(y == m-1 )return M[x][y];
if(mem[x][y] != -1)return mem[x][y];

//From the current cell we have 3 possible choices, we will choose the cell with max gold
//curr cell =>(x,y)
//3 choices are =>(x-1,y+1),(x,y+1),(x+1,y+1)

mem[x][y] = M[x][y]+max(calcMaxGold(x-1,y+1,n,m,M),max(calcMaxGold(x,y+1,n,m,M), calcMaxGold(x+1,y+1,n,m,M)));

return mem[x][y];
}


int maxGold(int n, int m, vector<vector<int>> M)
{
// code here
memset(mem, -1, sizeof(mem));

int ans = -1;

//Finding all the paths possible by taking the elements in the first column each time as the starting point of the path
for(int i = 0; i < n; i++){
int mx = calcMaxGold(i,0,n,m,M);
if(mx > ans)ans=mx;
}
return ans;

}
