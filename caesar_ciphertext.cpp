#include <iostream>
using namespace std;

int main() {

  int key = 0;
  cout << "請輸入密鑰:";
  cin >> key;

  cout << "請輸入要解密之文件:";

  string word;
  cin >> word;

  for (int num = 0; num < word[num]; num++){
    char final_word = word[num] - key;
    char over = final_word - 26;
    char other = word[num];
    if (word[num] >= 65 && word[num] <= 90){
      if (final_word >= 91){ 
        cout << over;
      } 
      else{
        cout << final_word;
      }
    }
    else if (word[num] >= 97 && word[num] <= 122){
      if (final_word >= 123){
        cout << over;
      } 
      else{
        cout << final_word;
      }
    }
    else{
      cout << other;
    }
  }
  

}
