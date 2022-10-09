https://www.hackerrank.com/contests/phonepe-oct-2022-assessment-2/challenges/terrorist/problem 

There are N cities (1,2,…..N) and M roads and the cities are connected to other cities by those roads. Terrorists have planted bombs in every city. Each bomb will explode one after the other. First bomb in city1 will explode, then city2 and so on.
Each explosion will destroy the city and the roads which are connected to it.
For every explosion, you need to return the number of connected components of cities.

Input Format

Input is given from Standard Input in the following format:
N M
A1 B1
A2 B2
.
.
.
AM BM
(Ai,Bi represents City number).

Constraints

1<=N<=200000
0<=M<=min(200000,(N(N-1))/2)
1<=Ai All values in input are integers.

Output Format

Print N lines.
The i-th line should contain the number of connected components when a city is exploded.

Sample Input 0

6 7
1 2
1 4
1 5
2 4
2 3
3 5
3 6
Sample Output 0

1
2
3
2
1
0
Explanation 0
![image](https://user-images.githubusercontent.com/66742842/194775915-6cc5bbdb-9d85-4d5b-93b0-175c107a0873.png)


