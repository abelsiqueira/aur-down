#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "\033[0;31mWrong usage. Use" << endl
         << "\033[0;34m  " << argv[0] << " <package>\033[0m" << endl;
    return 1;
  }

  string package(argv[1]);
  string url("https://aur.archlinux.org/packages/");
  url += package[0];
  url += package[1];
  url += "/";
  url += package;
  url += "/";
  url += package;
  url += ".tar.gz";

  cout << url << endl;

  return 0;
}
