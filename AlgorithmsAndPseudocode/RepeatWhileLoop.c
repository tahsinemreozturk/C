/*
Bir tekrarlama ifadesi (ayný zamanda yineleme ifadesi de denir) koþullar 
doðru olduðu sürece tekrar edilecek bir eylem belirtmemize imkan verir.

Not: C büyük küçük harfe duyarlýdýr bu yüzden While yazýmý hatalýdýr. 
Doðrusu while þeklinde olmalýdýr.


product = 3;

while ( product <= 100) {
	product = product * 3;
} //while sonu

Bu kod ifdesinde ilk deðer 3 olarak baþlar. Ardýndan while içinde 3' ün katlarý
alýnarak þart saðlanmayana kadar bu iþlem devam eder. Product deðeri 3,9,27
ve 81 olduðunda 100 den küçük olduðu için iþleme devam edilir. 3 * 81 = 243
olduðunda while <=100 deðeri saðlanmayacaðý için artýk 3 ile çarpýlamaz. 

Yani ilk olarak 3 deðeri ile baþlattýðýmýz product deðeri: 3,9,27,81,243 
deðerlerini almýþ oldu. Product' ýn son deðeri 243 olarak kalmýþ oldu.

*/