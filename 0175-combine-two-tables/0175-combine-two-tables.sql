SELECT p.firstName,p.lastName,a.state,a.city
FROM Person p
LEFT JOIN Address a ON p.PersonId = a.PersonId
