![image](https://user-images.githubusercontent.com/66742842/205664395-d0a88592-f0e9-48fc-8e74-c9ea3b089a19.png)

Problem Link: https://atcoder.jp/contests/abc280/tasks/abc280_d



Solution:
We know that N=p1^a * p2^b....pn^x where p in prime numbers.  
so N should be divisible by each (pi^a 1<=i<=n).  
so how you get p1^a or we can say that which number have p1 a times.
In other word, p1 have 1 p1, 2P1 have 1p1 ... p1*p1 have 2 p1.
hence sum of all p1 in (p1,2p1,3p1,4p1...p1*p1....3*p1*p1*p1), so that we get a times p1 ans maximum of all (pi 1<=i<=n) is our answer.
