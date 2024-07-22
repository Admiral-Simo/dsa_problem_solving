func destCity(paths [][]string) string {
	var (
		outgoingCities = map[string]struct{}{}
		ongoingCities  = map[string]struct{}{}
	)

	for _, path := range paths {
		outgoingCities[path[0]] = struct{}{}
		ongoingCities[path[1]] = struct{}{}
	}

	for city := range ongoingCities {
		if _, ok := outgoingCities[city]; !ok {
			return city
		}
	}

	return ""
}
