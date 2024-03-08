# [Gold V] Advanced ASCII Cubes - 7853 

[문제 링크](https://www.acmicpc.net/problem/7853) 

### 성능 요약

메모리: 2160 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 3월 8일 23:16:23

### 문제 설명

<p>The table surface is divided into N by M square cells. Some cubes are stacked one upon another over the cells, forming towers. For each cell the number of cubes stacked over it is given in the matrix A.</p>

<p>Your program must output the view of the table in ASCII graphics, where each cube is represented as shown below: </p>

<pre>  +---+
 /   /|
+---+ |
|   | +
|   |/
+---+</pre>

<p>(here the characters used are '<code>+</code>', '<code>-</code>', '<code>/</code>', '<code>|</code>', their ASCII codes are ASCII 43, 45, 47, 124)</p>

<p>The dot (ASCII 46) must be used as a background. </p>

### 입력 

 <p>Input file contains integers N M, followed by matrix A, row-by-row. The first row describes the cube tower furthest from the viewer, left to right, and the last row — nearest to the viewer. </p>

### 출력 

 <p>Output file must contain a string representation of the table view, with minimal number of lines required to show all cubes. Each line must contain a string of equal length, which is the minimal width required to show all cubes. </p>

