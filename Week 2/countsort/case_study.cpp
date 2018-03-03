/* 

Question: Implement a count sort on the given array A

A: 8 9 120 985 635 987 10 156 3658 .....................

Each array element can be in the range
1<= ar(i) <= 10^9

Size of the given array is say N

*/

/*

We know the concept of Count sort. We need to declare a count array of size M + 1.
Here M is the Maximum element in the given array.

So, if like in the given array the max element could be 10^9 Now, we declare a count array of 10^9 + 1 size.

If each array element is assumed to be 4Bytes, then total size of the array is ( 10^9 + 1 ) Bytes * 4 = 1 GB * 4 = 4GB

When we run the program, this entire program is placed in ram, so if say ram is only of size 4GB, then it could be a big problem

Conclusion:
We cannot apply Count sort on problems whose range R is very high

Time complexity: N + R
Space complexity: R

If R is a very large number Count sort cannot be applied
*/  
