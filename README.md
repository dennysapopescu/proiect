# PROIECT – SARITURA CALULUI PE TABLA DE SAH

Pentru rezolvarea problemei am început prin a declara câteva variabile de care vom avea nevoie, mai exact n fiind numărul de elemente, matr reprezentând matricea cu ajutorul căreia vor fi afișate soluțiile problemei și apoi, linie si coloana inițiale, care vor reține pozițiile în care se afla inițial calul. Mai jos se regăsesc doi vectori care vor salva direcțiile în care se deplasează calul pe tabla de șah, pe linii, respectiv pe coloane.
 
![Screenshot 2022-12-02 201845](https://user-images.githubusercontent.com/88237942/205514805-d3747090-02b7-47a8-9f27-a85f24b6395c.png)

Mai departe este funcția de citire cu ajutorul căreia vom citi valori pentru n, care reprezintă numărul liniilor și coloanelor pe care le va avea matricea și linia și coloana inițiala, adică poziția la care se regăsește calul pe tabla de șah inițial.
 
![Screenshot 2022-12-02 201947](https://user-images.githubusercontent.com/88237942/205514817-11093a5f-b9e7-42d6-95ea-4f92b3f5e79a.png)


Funcția “plin” va parcurge matricea și va verifica dacă există loc în matrice și va returna valoare false în cazul în care valoarea de la poziția respectivă este egală cu zero și true în caz contrar. 

![Screenshot 2022-12-02 202119](https://user-images.githubusercontent.com/88237942/205514823-c7cef8b6-7cef-463a-8f5a-751ac4f06048.png)

Funcția “afisare” va afișa soluțiile problemei, totodată numărându-le prin intermediul unui contor, nr_sol.

![Screenshot 2022-12-02 202216](https://user-images.githubusercontent.com/88237942/205514827-804a01e9-fafd-4fe3-9cce-161c9ca671ac.png)

Funcția  “ok” va verifica dacă nu sunt depășite limitele matricei și va returna true sau false în funcție de condițiile verificate.

![Screenshot 2022-12-02 202237](https://user-images.githubusercontent.com/88237942/205514832-8888116f-7177-4d26-9c9b-1b0b7d176143.png)

Funcția “back” este responsabilă de aplicarea metodei backtracking pentru obținerea soluțiilor problemei și va face o verificare prin intermediul funcției “plin”, iar în caz afirmativ va apela funcția de afisare pentru obținerea soluțiilor problemei. Dacă va trece pe ramura else, va parcurge cele 8 direcții în care se poate deplasa calul pe tabla de șah, după care se vor inițializa două variabile noi, vi și vj pentru linii și pentru coloane, a căror rezultate vor fi suma dintre indexul de pe vectorul de direcții si linia, respectiv coloana. Dacă acestea vor respecta condițiile verificate in cadrul funcției “ok”, atunci matr[vi][vj] va lua valoarea incrementării contorului k, după care se va apela recursiv funcția back și valoarea matr[vi][vj]  va fi setat[ pe zero, după care contorul k se va decrementa.

![Screenshot 2022-12-02 202300](https://user-images.githubusercontent.com/88237942/205514836-9e93349e-95c4-47e0-9c29-bb520c2afb2b.png)

În programul principal, vom apela funcția de citire pentru introducerea valorilor de care avem nevoie,  după care se va apela funcția “back”, având ca parametrii linia și coloana inițială. 
 
 ![Screenshot 2022-12-02 202318](https://user-images.githubusercontent.com/88237942/205514842-34148f4c-9e33-4012-8c8e-7b4917eea453.png)
 
 Un prim exemplu in ceea ce priveste solutiile problemei este urmatorul:
 numarul de linii si coloane: 5
linia si coloana de la care porneste deplasarea:
linia: 1
coloana: 1

solutia cu numarul 1
25      16      7       2       19
6       1       18      15      8
17      24      11      20      3
12      5       22      9       14
23      10      13      4       21



solutia cu numarul 2
19      16      7       2       25
6       1       18      15      8
17      20      11      24      3
12      5       22      9       14
21      10      13      4       23



solutia cu numarul 3
23      16      7       2       21
6       1       22      15      8
17      24      11      20      3
12      5       18      9       14
25      10      13      4       19



solutia cu numarul 4
21      16      7       2       23
6       1       22      15      8
17      20      11      24      3
12      5       18      9       14
19      10      13      4       25



solutia cu numarul 5
21      12      7       2       19
6       1       20      13      8
11      22      15      18      3
16      5       24      9       14
23      10      17      4       25



solutia cu numarul 6
23      12      7       2       25
6       1       24      13      8
11      22      15      18      3
16      5       20      9       14
21      10      17      4       19



solutia cu numarul 7
25      12      7       2       23
6       1       24      13      8
11      18      15      22      3
16      5       20      9       14
19      10      17      4       21



solutia cu numarul 8
19      12      7       2       21
6       1       20      13      8
11      18      15      22      3
16      5       24      9       14
25      10      17      4       23



solutia cu numarul 9
23      12      7       2       21
6       1       22      17      8
11      24      13      20      3
14      5       18      9       16
25      10      15      4       19



solutia cu numarul 10
21      12      7       2       23
6       1       22      17      8
11      20      13      24      3
14      5       18      9       16
19      10      15      4       25



solutia cu numarul 11
25      12      7       2       23
6       1       24      17      8
11      18      13      22      3
14      5       20      9       16
19      10      15      4       21



solutia cu numarul 12
19      12      7       2       21
6       1       20      17      8
11      18      13      22      3
14      5       24      9       16
25      10      15      4       23



solutia cu numarul 13
25      14      7       2       23
6       1       24      13      8
15      18      9       22      3
10      5       20      17      12
19      16      11      4       21



solutia cu numarul 14
19      14      7       2       21
6       1       20      13      8
15      18      9       22      3
10      5       24      17      12
25      16      11      4       23



solutia cu numarul 15
25      14      7       2       19
6       1       18      13      8
15      24      9       20      3
10      5       22      17      12
23      16      11      4       21



solutia cu numarul 16
19      14      7       2       25
6       1       18      13      8
15      20      9       24      3
10      5       22      17      12
21      16      11      4       23



solutia cu numarul 17
21      12      17      2       19
6       1       20      11      16
13      22      7       18      3
8       5       24      15      10
23      14      9       4       25



solutia cu numarul 18
23      12      17      2       25
6       1       24      11      16
13      22      7       18      3
8       5       20      15      10
21      14      9       4       19



solutia cu numarul 19
25      12      17      2       23
6       1       24      11      16
13      18      7       22      3
8       5       20      15      10
19      14      9       4       21



solutia cu numarul 20
19      12      17      2       21
6       1       20      11      16
13      18      7       22      3
8       5       24      15      10
25      14      9       4       23



solutia cu numarul 21
25      10      15      2       19
16      1       18      9       14
11      24      5       20      3
6       17      22      13      8
23      12      7       4       21



solutia cu numarul 22
19      10      15      2       25
16      1       18      9       14
11      20      5       24      3
6       17      22      13      8
21      12      7       4       23



solutia cu numarul 23
21      10      15      2       19
16      1       20      9       14
11      22      5       18      3
6       17      24      13      8
23      12      7       4       25



solutia cu numarul 24
23      10      15      2       25
16      1       24      9       14
11      22      5       18      3
6       17      20      13      8
21      12      7       4       19



solutia cu numarul 25
23      8       13      2       21
14      1       22      7       12
9       24      3       20      17
4       15      18      11      6
25      10      5       16      19



solutia cu numarul 26
21      8       13      2       23
14      1       22      7       12
9       20      3       24      17
4       15      18      11      6
19      10      5       16      25



solutia cu numarul 27
25      8       13      2       19
14      1       18      7       12
9       24      3       20      17
4       15      22      11      6
23      10      5       16      21



solutia cu numarul 28
19      8       13      2       25
14      1       18      7       12
9       20      3       24      17
4       15      22      11      6
21      10      5       16      23



solutia cu numarul 29
21      14      9       4       19
8       1       20      15      10
13      22      3       18      5
2       7       24      11      16
23      12      17      6       25



solutia cu numarul 30
23      14      9       4       25
8       1       24      15      10
13      22      3       18      5
2       7       20      11      16
21      12      17      6       19



solutia cu numarul 31
25      14      9       4       23
8       1       24      15      10
13      18      3       22      5
2       7       20      11      16
19      12      17      6       21



solutia cu numarul 32
19      14      9       4       21
8       1       20      15      10
13      18      3       22      5
2       7       24      11      16
25      12      17      6       23



solutia cu numarul 33
23      16      11      6       21
10      1       22      17      12
15      24      5       20      7
2       9       18      13      4
25      14      3       8       19



solutia cu numarul 34
21      16      11      6       23
10      1       22      17      12
15      20      5       24      7
2       9       18      13      4
19      14      3       8       25



solutia cu numarul 35
25      16      11      6       23
10      1       24      17      12
15      18      5       22      7
2       9       20      13      4
19      14      3       8       21



solutia cu numarul 36
19      16      11      6       21
10      1       20      17      12
15      18      5       22      7
2       9       24      13      4
25      14      3       8       23



solutia cu numarul 37
25      6       13      8       19
12      1       18      5       14
17      24      7       20      9
2       11      22      15      4
23      16      3       10      21



solutia cu numarul 38
19      6       13      8       25
12      1       18      5       14
17      20      7       24      9
2       11      22      15      4
21      16      3       10      23



solutia cu numarul 39
23      6       13      8       21
12      1       22      5       14
17      24      7       20      9
2       11      18      15      4
25      16      3       10      19



solutia cu numarul 40
21      6       13      8       23
12      1       22      5       14
17      20      7       24      9
2       11      18      15      4
19      16      3       10      25



solutia cu numarul 41
25      6       15      10      23
14      1       24      5       16
7       18      9       22      11
2       13      20      17      4
19      8       3       12      21



solutia cu numarul 42
19      6       15      10      21
14      1       20      5       16
7       18      9       22      11
2       13      24      17      4
25      8       3       12      23



solutia cu numarul 43
25      6       15      10      19
14      1       18      5       16
7       24      9       20      11
2       13      22      17      4
23      8       3       12      21



solutia cu numarul 44
19      6       15      10      25
14      1       18      5       16
7       20      9       24      11
2       13      22      17      4
21      8       3       12      23



solutia cu numarul 45
21      6       17      12      19
16      1       20      5       10
7       22      11      18      13
2       15      24      9       4
23      8       3       14      25



solutia cu numarul 46
23      6       17      12      25
16      1       24      5       10
7       22      11      18      13
2       15      20      9       4
21      8       3       14      19



solutia cu numarul 47
25      6       17      12      23
16      1       24      5       10
7       18      11      22      13
2       15      20      9       4
19      8       3       14      21



solutia cu numarul 48
19      6       17      12      21
16      1       20      5       10
7       18      11      22      13
2       15      24      9       4
25      8       3       14      23



solutia cu numarul 49
25      6       11      14      19
12      1       18      5       10
7       24      13      20      15
2       17      22      9       4
23      8       3       16      21



solutia cu numarul 50
19      6       11      14      25
12      1       18      5       10
7       20      13      24      15
2       17      22      9       4
21      8       3       16      23



solutia cu numarul 51
21      6       11      14      19
12      1       20      5       10
7       22      13      18      15
2       17      24      9       4
23      8       3       16      25



solutia cu numarul 52
23      6       11      14      25
12      1       24      5       10
7       22      13      18      15
2       17      20      9       4
21      8       3       16      19



solutia cu numarul 53
23      6       11      16      21
12      1       22      5       10
7       24      15      20      17
2       13      18      9       4
25      8       3       14      19



solutia cu numarul 54
21      6       11      16      23
12      1       22      5       10
7       20      15      24      17
2       13      18      9       4
19      8       3       14      25



solutia cu numarul 55
25      6       11      16      19
12      1       18      5       10
7       24      15      20      17
2       13      22      9       4
23      8       3       14      21



solutia cu numarul 56
19      6       11      16      25
12      1       18      5       10
7       20      15      24      17
2       13      22      9       4
21      8       3       14      23


