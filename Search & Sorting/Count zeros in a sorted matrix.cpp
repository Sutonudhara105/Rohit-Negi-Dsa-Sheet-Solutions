/*Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix.

Example 1:

Input:
N = 3
A = {{0, 0, 0},
     {0, 0, 1},
     {0, 1, 1}}
Output: 6
Explanation: 
The first, second and third row contains 3, 2 and 1
zeroes respectively.
Example 2:

Input:
N = 2
A = {{1, 1},
     {1, 1}}
Output: 0
Explanation:
There are no zeroes in any of the rows.
Your Task:
You don't need to read input or print anything. Your task is to complete the function countZeros() which takes a 2D matrix as input and returns the number occurring only once.

Expected Time Complexity: O(N ).
Expected Auxiliary Space: O(1).

Constraints*/

class Solution{
public:
	int countZeros(vector<vector<int>>a)
	{
		//code here
		int n=a.size();
		int c=0;
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(a[i][j]==0){
		            c++;
		        }
		    }
		}
		return c;
	}
};