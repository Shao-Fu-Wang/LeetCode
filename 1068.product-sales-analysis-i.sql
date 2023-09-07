--
-- @lc app=leetcode id=1068 lang=mysql
--
-- [1068] Product Sales Analysis I
--

-- @lc code=start
# Write your MySQL query statement below
SELECT product_name, year, price FROM Sales 
  LEFT JOIN Product
  ON Sales.product_id = Product.product_id
-- @lc code=end

