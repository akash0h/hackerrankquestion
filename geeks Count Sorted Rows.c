// User function Template for C++

class Solution {
public:
	int sortedCount(int N, int M, vector<vector<int>> Mat) {
		// code here
		int count=0;
		for(int i=0; i<N; ++i)
		{
		    int flag1=1,flag2=1;
			for(int j=0; j<M-1; ++j)
			{
				//means I am assuming that the row is strictly increasing but as it fails make flag1=0
				if(Mat[i][j]>=Mat[i][j+1])
				{
					flag1=0; //dont think that this is checking for decreasing order seeing the upper loop
					//this is checking for stritly increasing
				}
				if(Mat[i][j]<=Mat[i][j+1])
				{
				    flag2=0;
				}
				
			}
			if(flag1==1 || flag2==1)
			{
			    count++;
			}
		}
		return count;
	}
};
