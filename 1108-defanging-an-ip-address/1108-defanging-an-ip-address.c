char * defangIPaddr(char * address){
    int len = strlen(address), j = 0;
    char* newStr = malloc(sizeof(char) * (len + 7));
    for(int i = 0; i < len; i++) {
        if (address[i] == '.') {
            newStr[j++] = '[';
            newStr[j++] = '.';
            newStr[j++] = ']';
        } else {
            newStr[j++] = address[i];
        }
    }
    newStr[j] = '\0';
    return newStr;
}