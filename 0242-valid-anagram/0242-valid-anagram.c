bool isAnagram(char* s, char* t) {
    size_t size = strlen(s), i;
    if (size != strlen(t)) return false;
    int charMap[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for(i = 0; i < size; i++) {
        charMap[s[i] - 'a']++;
        charMap[t[i] - 'a']--;
    }
    for(i = 0; i < 26; i++) {
        if (charMap[i] != 0) return false;
    }
    return true;
}