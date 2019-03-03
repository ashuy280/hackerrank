// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic) {
  int count = 1, max = INT_MIN;
  for (int i = 0; i < topic.size() - 1; i++) {
    for (int j = i + 1; j < topic.size(); j++) {
      int temp = 0;
      for (int k = 0; k < topic[i].length(); k++)
        if (topic[i][k] == '1' || topic[j][k] == '1')
          temp++;
      if (temp > max) {
        max = temp;
        count = 1;
      } else if (temp == max)
        count++;
    }
  }
  vector<int>a;
  a.push_back(max);
  a.push_back(count);
  return a;
}
