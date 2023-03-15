int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int x{0};
    int y{0};

    for (int i = 0; i < n; i++) {
        x = x + arr[i][i];
        y = y + arr[i][n-i-1];
    }
    return abs(x-y);
}
