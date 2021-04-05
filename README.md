### LeetCode_No.88_-合并两个有序数组
* 题目介绍

      给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
      初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。

* 示例 1：

      输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
      输出：[1,2,2,3,5,6]
* 示例 2：

      输入：nums1 = [1], m = 1, nums2 = [], n = 0
      输出：[1]

* 提示：

      nums1.length == m + n
      nums2.length == n
      0 <= m, n <= 200
      1 <= m + n <= 200
      -109 <= nums1[i], nums2[i] <= 109
### 解法思路
* 双指针
  * 时间复杂度O(n)
  * 空间复杂度O(1)
  *	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
  *	内存消耗：8.7 MB, 在所有 C++ 提交中击败了93.93%的用户

来源：力扣（LeetCode）\
链接：https://leetcode-cn.com/problems/merge-sorted-array \
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
