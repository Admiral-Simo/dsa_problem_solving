func destCity(paths [][]string) string {
	outgoingCities := map[string]struct{}{}

	for _, path := range paths {
		outgoingCities[path[0]] = struct{}{}
	}

	for _, path := range paths {
		city := path[1]
		if _, ok := outgoingCities[city]; !ok {
			return city
		}
	}

	return ""
}
