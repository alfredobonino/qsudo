QSudo - a lightweight graphical sudo
==================================================
Dependencies:
only qt5
For install:
qmake && make && sudo make install

=========
for use qsudo, in programs that use gksu:

Uninstall gksu.

Create a symbolic link:

ln -s /usr/bin/qsudo /usr/bin/gksu
