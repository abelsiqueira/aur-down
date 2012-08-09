aur-down
========

aur-down is a simple program to create a link to the aur tarball of a 
package. It was lightly used so far. Can't guarantee it will work
everytime. You will still need to makepkg and pacman the package.
This is targeted at lazy people who don't want to type the whole
url of the tarball, neither wants to/can use the mouse.

Install
-------

$ make
# make install

Usage
-----

Calling

$ aur-down <package>

will create a link to the aur package. To download the package, you
should use

$ wget $(aur-down <package>)

Consider

Todo:
* Use wget to download the file

