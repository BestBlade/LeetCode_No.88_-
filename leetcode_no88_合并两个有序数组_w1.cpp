/* ------------------------------------------------------------------|
给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

注意:
不能使用代码库中的排序函数来解决这道题。

示例:

输入: [2,0,2,1,1,0]
输出: [0,0,1,1,2,2]
进阶：

一个直观的解决方案是使用计数排序的两趟扫描算法。
首先，迭代计算出0、1 和 2 元素的个数，然后按照0、1、2的排序，重写当前数组。
你能想出一个仅使用常数空间的一趟扫描算法吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-colors
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	双指针法
*
*	执行用时：4 ms, 在所有 C++ 提交中击败了84.80%的用户
*	内存消耗：9 MB, 在所有 C++ 提交中击败了35.31%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	if (m == 0) {
		nums1 = nums2;
		return;
	}
	int p1 = m - 1;
	int p2 = n - 1;
	int p = m + n - 1;

	while (p1 >= 0 && p2 >= 0) {
		nums1[p--] = nums1[p1] <= nums2[p2] ? nums2[p2--] : nums1[p1--];
	}
	//到这里还有可能是因为p1<0而退出的while,p2没有走完，因此再将剩余的nums2中的元素存到nums1中去
	if (p1 < 0) {
		while (p2 >= 0) {
			nums1[p--] = nums2[p2--];
		}
	}

	return;
}

int main() {
	vector<int> nums1 = { 2,0 };
	int m = 1;
	vector<int> nums2 = { 1 };
	int n = 1;


	merge(nums1, m, nums2, n);
}