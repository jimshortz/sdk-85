10 REM ALTAIR 78 BASIC VERSION
20 REM HAS NO % VARIABLES
30 N=2000
50 DIM A(N)
100 FOR I = 2 TO N-1
110 IF A(I) = 1 THEN GOTO 200
120 PRINT I
130 FOR J=I TO N STEP I
140 A(J) = 1
150 NEXT J
200 NEXT I
