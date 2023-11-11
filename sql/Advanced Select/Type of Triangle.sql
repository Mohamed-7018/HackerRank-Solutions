/*
Enter your query here.
*/
SELECT 
CASE
WHEN A+B<=C OR A+C<=B OR B+C<=A THEN "Not A Triangle"
WHEN A=B and B=C THEN "Equilateral"
WHEN A=B OR A=C OR B=C THEN "Isosceles"
else "Scalene"
END
AS x
FROM TRIANGLES;
