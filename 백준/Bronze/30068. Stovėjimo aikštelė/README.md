# [Bronze II] Stovėjimo aikštelė - 30068 

[문제 링크](https://www.acmicpc.net/problem/30068) 

### 성능 요약

메모리: 2028 KB, 시간: 0 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현

### 제출 일자

2025년 2월 5일 00:32:47

### 문제 설명

<p>Šiuolaikinėse automobilių aikštelėse dažnai įrengiamos sistemos užfiksuoti įvažiuojančių ir išvažiuojančių automobilių numerius. Tokiu būdu galima apmokestinti automobilių savininkus pagal tikslų laiką, kurį automobiliai praleido aikštelėje.</p>

<p>Šiame uždavinyje panagrinėsime vieną iš tokios sistemos komponentų.</p>

<p>Jums pateiktas sąrašas įrašų, kuriuos sudaro du sveikieji skaičiai:</p>

<ol>
	<li>$T_i$ – laiko momentas (matuojamas sekundėmis),</li>
	<li>$N_i$ – automobilio numeris.</li>
</ol>

<p>Pirmas sutiktas įrašas su numeriu $N_i$ reiškia, kad šis automobilis įvažiavo į stovėjimo aikštelę. Antras – kad šis automobilis išvažiavo. Galite laikyti, kad nei vienas numeris nebus pateiktas sąraše daugiau nei du kartus.</p>

<p>Suskaičiuokite, kiek laiko kiekvienas automobilis praleido stovėjimo aikštelėje.</p>

### 입력 

 <p>Pirmoje eilutėje pateiktas vienas sveikasis skaičius $M$ – įrašų skaičius. Toliau seka $M$ įrašų, po vieną eilutėje, kuriuos sudaro aukščiau aprašyti du sveikieji skaičiai $T_i$ ir $N_i$. Visi įrašai yra pateikti $T_i$ didėjimo tvarka.</p>

### 출력 

 <p>Jūsų programa turi išvesti po vieną eilutę kiekvienam automobiliui, kuris išvažiavo iš stovėjimo aikštelės. Eilutėje turi būti pateikti du skaičiai: automobilio numeris $N_i$ ir sekundžių, kurias automobilis praleido aikštelėje, skaičius $s_i$. Rezultatus programa turi išvesti ta tvarka, kuria automobiliai išvažiavo iš stovėjimo aikštelės.</p>

