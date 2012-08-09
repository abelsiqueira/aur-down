/* Copyright 2012 - Abel Soares Siqueira
 * 
 * This file is part of aur-down.
 * 
 * aur-down is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * aur-down is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with aur-down.  If not, see <http://www.gnu.org/licenses/>.
 */
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
