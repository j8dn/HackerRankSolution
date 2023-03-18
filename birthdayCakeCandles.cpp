int birthdayCakeCandles(vector<int> candles) {
    int max = *max_element(begin(candles),end(candles));
    int count{0};
    for (int i : candles) {
        if (i==max) {
            count += 1;
        }
    }
    return count;
}
