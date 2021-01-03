/*
 * n&(n-1)可去掉n最低位的1，利用该操作可迅速计算n中1的个数，
 * 提交leetcode，执行时间0ms，取得最优执行时间
 */ 
class Solution{
	public:
		int hammingDistant(int x,int y){
			//存储异或结果，相异为1，汉明距离即为r中1的个数
			int r=x^y;
			int distant = 0;
			//二进制r&（r-1）可以去掉r的最后一个1，不断进行此操作，将r变为0，可得出r中1的个数
			while(r!=0){
				r&=r-1;
				distant++;
			}
			return distant;
		}
};
