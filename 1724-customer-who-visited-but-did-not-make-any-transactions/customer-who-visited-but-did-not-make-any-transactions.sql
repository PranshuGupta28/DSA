# Write your MySQL query statement be
-- select customer_id ,count(*)as count_no_trans
-- from visits
-- where customer_id not in
-- (select customer_id
-- from visits v
-- join Transactions t on v.visit_id = t.visit_id
-- group by t.visit_id)
-- group by customer_id
SELECT 
    customer_id, 
    COUNT(*) AS count_no_trans
FROM visits
WHERE visit_id NOT IN (
    SELECT DISTINCT visit_id 
    FROM Transactions
)
GROUP BY customer_id;

