#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string solution(string letter) {
  string answer = "";
  unordered_map<std::string, char> m = {
      {".-", 'a'},   {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},  {".", 'e'},
      {"..-.", 'f'}, {"--.", 'g'},  {"....", 'h'}, {"..", 'i'},   {".---", 'j'},
      {"-.-", 'k'},  {".-..", 'l'}, {"--", 'm'},   {"-.", 'n'},   {"---", 'o'},
      {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},  {"...", 's'},  {"-", 't'},
      {"..-", 'u'},  {"...-", 'v'}, {".--", 'w'},  {"-..-", 'x'}, {"-.--", 'y'},
      {"--..", 'z'}};
  string temp;
  for (int i = 0; i < letter.size(); i++) {
    char a = letter[i];
    if (a != 32) {
      temp = temp + a;
    } else {
      answer.push_back(m[temp]);
      temp = "";
    }
  }
  answer.push_back(m[temp]);
  temp = "";

  return answer;
}

int main() {
  string result = solution(".... . .-.. .-.. ---");
  cout << result;
  return 0;
}