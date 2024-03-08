# [Gold V] Kocka - 14066 

[문제 링크](https://www.acmicpc.net/problem/14066) 

### 성능 요약

메모리: 2160 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 3월 8일 23:15:56

### 문제 설명

<p>Potrebno je, pomoću ASCII znakova, napraviti grafički prostorni prikaz hrpe poslaganih kockica. Kocke su pravilno složene u m redaka i n stupaca, a na nekim kockama se nalazi jedna ili više drugih kocaka koje na taj način formiraju tornjeve. Redci su označeni redom brojevima od 1 do m tako da redak broj 1 označava najudaljeniji, a redak broj m najbliži redak na grafičkom prikazu. Stupci su označeni redom brojevima od 1 do n, slijeva na desno. Neke kocke zaklanjaju druge kocke koje su onda djelomično ili potpuno skrivene. Jednu kocku prikazujemo pomoću znakova “+” (plus), “-” (minus), “|” (okomita crta), “/” (kosa crta) i “ ” (razmak) u 6 redaka i 7 stupaca na sljedeći način:</p>

<pre>  +---+
 /   /| 
+---+ |
|   | +
|   |/
+---+
</pre>

<p>Napišite program koji će odrediti grafički prikaz cijele zadane konfiguracije, koristeći pri tome što je moguće manje redaka i stupaca. Prazna polja označite znakom “.” (točka).</p>

### 입력 

 <p>U prvom redu se nalaze prirodni brojevi m i n (1 ≤ m, n ≤ 50). U svakom od sljedećih m redova nalazi se n prirodnih brojeva. Svaki od njih je manji od ili jednak 50, a označava visinu tj. ukupni broj naslaganih kockica na toj poziciji.</p>

### 출력 

 <p>Ispišite grafički prikaz zadanih kocaka u prostoru kako je opisano u tekstu zadatka.</p>

