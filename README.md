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


