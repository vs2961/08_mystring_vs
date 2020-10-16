int mystrlen(char *s) {
    int i = 0;
    while (*s) {
        i++;
        s++;
    }
    return i;
}

char *mystrcpy(char *dest, char *source) {
    char *save = dest;
    while (*source) {
        *save = *source;
        save++;
        source++;
    }
    return dest;
}

char *mystrncpy(char *dest, char *source, int n) {
    int i = 0;
    char *save = dest;
    while (*source && i < n) {
        *save = *source;
        save++;
        source++;
        i++;
    }
    return dest;
}

char *mystrcat(char *dest, char *source) {
    char *curr = dest;
    while (*curr) {
        curr++;
    }
    while (*source) {
        *curr = *source;
        curr++;
        source++;
    }
    return dest;
}

char *mystrncat(char *dest, char *source, int n) {
    char *curr = dest;
    while (*curr) {
        curr++;
    }
    int i = 0;
    while (*source && i < n) {
        *curr = *source;
        curr++;
        source++;
        i++;
    }
    return dest;
}

int mystrcmp(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 > *s2) {
            return 1;
        }
        else if (*s1 < *s2) {
            return -1;
        }
        s1++;
        s2++;
    }
    if (*s1) {
        return 1;
    }
    if (*s2) {
        return -1;
    }
    return 0;
}

char *mystrchr(char *s, char c) {
    while (*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }
    if (c == 0) {
        return s;
    }
    return 0;
}

char *mystrstr(char *s1, char *s2) {
    while (*s1) {
        char *curr = s1;
        char *curr2 = s2;
        int check = 1;
        while (*curr2) {
            if (*curr != *curr2) {
                check = 0;
                break;
            }
            curr++;
            curr2++;
        }
        if (check) {
            return s1;
        }
        s1++;
    }
    return 0;
}

