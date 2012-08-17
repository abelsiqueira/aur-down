"""
 * Copyright 2012 - Abel Soares Siqueira
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
 *"""
#!/usr/bin/python
import sys
import subprocess
import re

if len(sys.argv) < 2:
  print "Wrong usage. Use"
  print "   aur-down <package>" 
  exit()

package = sys.argv[1];
url = "https://aur.archlinux.org/packages/" + package[:2]
url = url + "/" + package + "/" + package + ".tar.gz"
      
p = subprocess.Popen("wget " + url, stdout=subprocess.PIPE,
    stderr=subprocess.PIPE, shell=True)
print "Downloading package " + package + " at url"
print url

p.communicate()

print "Unpacking"

p = subprocess.Popen("tar -zxf " + package + ".tar.gz",
    stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
p.communicate()

print "Good luck"
