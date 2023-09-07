--
-- @lc app=leetcode id=1251 lang=mysql
--
-- [1251] Average Selling Price
--

-- @lc code=start
# Write your MySQL query statement below
SELECT Prices.product_id, ROUND(SUM(units*price)/SUM(units), 2) AS average_price
FROM Prices
INNER JOIN UnitsSold
  ON Prices.product_id = UnitsSold.product_id
  WHERE UnitsSold.purchase_date BETWEEN Prices.start_date AND Prices.end_date
GROUP BY Prices.product_id

-- @lc code=end

