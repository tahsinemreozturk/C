/*
Bir tekrarlama ifadesi (ayn� zamanda yineleme ifadesi de denir) ko�ullar 
do�ru oldu�u s�rece tekrar edilecek bir eylem belirtmemize imkan verir.

Not: C b�y�k k���k harfe duyarl�d�r bu y�zden While yaz�m� hatal�d�r. 
Do�rusu while �eklinde olmal�d�r.


product = 3;

while ( product <= 100) {
	product = product * 3;
} //while sonu

Bu kod ifdesinde ilk de�er 3 olarak ba�lar. Ard�ndan while i�inde 3' �n katlar�
al�narak �art sa�lanmayana kadar bu i�lem devam eder. Product de�eri 3,9,27
ve 81 oldu�unda 100 den k���k oldu�u i�in i�leme devam edilir. 3 * 81 = 243
oldu�unda while <=100 de�eri sa�lanmayaca�� i�in art�k 3 ile �arp�lamaz. 

Yani ilk olarak 3 de�eri ile ba�latt���m�z product de�eri: 3,9,27,81,243 
de�erlerini alm�� oldu. Product' �n son de�eri 243 olarak kalm�� oldu.

*/