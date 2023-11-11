/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE right(CITY,1) not in ('a','e','i','o','u')