# tivflib
The c++ library for the tivf image format

# what can tivf be used for
- Games
- cli based paint programs
- any cli program
- You might be able to use it on GUI programs. But i'm not sure
# How does a TIVF file work
TIVF is an file format that can be viewed in the Linux Terminal.

So a TIVF file looks like this:
```
RRRRRRRRRRRRRRRN
RDDDDDDDDDDDDDRN
RDDDDDDDDDDDDDRN
RRRRRRRRRRRRRRRN
RRRRRRRRRRRRRRRN
RRRRRRRRRRRRRRRN
RRRR0000000RRRRN
RRRR0000000RRRR
```

It may look confusing. But it really isn't. Every character is either a color or a newline.

Here is a list of colors:

```
0 = Black
R = Red
G = Green
O = Orange
B = Blue
M = Magenta
C = Cyan
L = Light gray
D = Default color
N = Newline
```
