#include <iostream>
#include <string>

using namespace std;

int main() {
  int score = 70;
  int min_score = 80;

  string isPassed =
      score >= min_score
          ? "Selamat Anda Lulus"
          : "Maaf anda belum lulus, belajar lebih giat lagi ya! semangat";
  cout << isPassed;
  return 0;
}
