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
  
![Screenshot 2022-12-05 153959](https://user-images.githubusercontent.com/88237942/205651902-3414a43e-28a6-4dfa-83ec-fcacbc6276e8.png)	
![Screenshot 2022-12-05 154043](https://user-images.githubusercontent.com/88237942/205651925-fc2eef97-0220-4db3-900f-4855ac621a39.png)	
![Screenshot 2022-12-05 154145](https://user-images.githubusercontent.com/88237942/205651953-7ab33f43-068a-495b-acba-7a9cab167d4c.png)	
![Screenshot 2022-12-05 154220](https://user-images.githubusercontent.com/88237942/205651978-16e908b1-701a-4414-bca6-4ea0a6e84e60.png)	
![Screenshot 2022-12-05 154242](https://user-images.githubusercontent.com/88237942/205652001-19453da9-76d5-4752-ac78-3834af6e713f.png)


Un alt exemplu sunt primele 10 cazuri ale solutiei pentru n = 6, deoarece aceasta varianta prezinta peste 1000 de cazuri.

![Screenshot 2022-12-05 153535](https://user-images.githubusercontent.com/88237942/205650389-5563ef48-8508-4a99-b80d-5acd7de7fdce.png)

