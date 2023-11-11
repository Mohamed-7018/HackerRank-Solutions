/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE left(CITY,1) IN ('a','e','i','o','u') AND right (CITY,1) in ('a','e','i','o','u');