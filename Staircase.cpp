void staircase(int n) {
    // "i" is the ammount of "#" we need to print.
    for (int i = 1; i<= n; i++) {
        printf("%s",std::string(n-i,' ').c_str());
        printf("%s\n",std::string(i,'#').c_str());
    }
}
