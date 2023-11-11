/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE left(CITY,1)not in ('a','e','i','o','u')
 AND right(CITY,1) not in ('a','e','i','o','u')