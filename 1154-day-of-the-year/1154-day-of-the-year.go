func isLeapYear(year int) bool {
	return (year%4 == 0 && year%100 != 0) || (year%400 == 0)
}

func dayOfYear(date string) int {
	splitted := strings.Split(date, "-")
	year, _ := strconv.Atoi(splitted[0])
	month, _ := strconv.Atoi(splitted[1])
	day, _ := strconv.Atoi(splitted[2])

	daysInMonth := []int{31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31}
	if isLeapYear(year) {
		daysInMonth[1] = 29
	}

	dayOfYear := day
	for i := 0; i < month-1; i++ {
		dayOfYear += daysInMonth[i]
	}
	return dayOfYear
}
