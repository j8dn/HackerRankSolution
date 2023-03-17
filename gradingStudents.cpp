vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;
    for (int i : grades) {
        if (i >= 38 && i%5 >= 3) {
            result.push_back(i/5*5+5);
        } else {
            result.push_back(i);
        }
    }
    return result;
}
