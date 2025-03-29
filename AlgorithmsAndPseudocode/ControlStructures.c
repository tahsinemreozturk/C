/*
Normalde arka arkaya yürütülen (sýralý yürütme) ifadeleri, yürütülen 
ifadeden sonra gelecek bir ifade yerine baþka bir ifade gelmesini Kontrol
Yapýlarý ile saðlarýz. Buna kontrolün aktarýmý denir.

Kontrol yapýlarýnýn nasýl çalýþtýðýný Akýþ Diyagramlarý ile kolayca gösterebiliriz

Dikdörtgen, eþkenar dörtgen, yuvarlanmýþ dörtgen ve küçük daireler ile bu 
diyagramlarý oluþtururuz.

Dikdörtgen (Ýþlem) ----> Hesaplama veya Bir Giriþ/Çýkýþ

Oval (Baþlangýç/Bitiþ) ----> Akýþýn baþladýðýný veya bittiðini gösterir.

Paralelkenar (Giriþ/Çýkýþ) ----> Kullanýcýdan giriþ alýnmasýný veya ekrana 
çýktý verilmesini ifade eder.

Eþkenar Dörtgen (Karar) ----> Bir koþula baðlý olarak akýþýn yönlendirildiði noktadýr.

Oklar (Baðlantý) ---->  Þekiller arasýndaki akýþý gösterir.

Daire (Baðlantý Noktasý) ----> Akýþ diyagramýnýn farklý bölümlerini 
birbirine baðlar.

##### --- Selection Expressions In C --- ##### 
C' de üç tür seçim yapýsýnda sahiptir. if, if else ve switch.

if seçim ifadesi eðer koþul doðruysa ya eylemi icra eder ya da koþul yanlýþ 
ise eylemi atlar. 

if else seçim ifadesi eðer koþul doðru ise eylemi icra eder ve yanlýþsa baþka
bir eylem icra eder.

switch seçim ifadesi ifadedeki deðere baðlý olarak çok sayýda farklý eylemden
birini icra eder.

Ýki farklý eylem arasýnda seçim yaptýðý için if...else ifadesine çift seçim
ifadesi denir.
Çok sayýda farklý eylem arasýndan seçim yaptýðý içim switch ifadesine çoklu 
seçim ifadesi denir.

##### --- Repetition statements in C --- ##### 
C' de while, do...while ve for olmak üzere 3 tane tekrarlama ifadesi vardýr.

Kontrol ifadelerini birleþtirmenin yalnýzca tek bir yolu - kontrol ifadesini
kümeleme isimli yöntem - olduðunu öðreneceðiz. Bu nedenle, inþa edeceðimiz 
herhangi bir C programý, sadece iki þekilde birleþtirilebilen yedi tür kontrol
ifadesinden oluþturulabilir. Bu basitliðin özüdür.



The If Statement
Seçim ifadeleri, alternatif eylemler arasýndan seçim yapmak için kullanýlýrlar.
Örneðin, bir sýnavdaki geçme notunun 50 olmasý gibi.

{	Eðer öðrencinin notu 60' tan büyük veya eþitse
		"Geçti" Yaz
}
Yukarýdaki sözde kod ifadesinde olduðu gibi öðrencinin notunun 60'tan büyük
veya eþit olduðu koþulunun doðru mu yanlýþ mý olduðu kararlaþtýrýlýr. Koþul
doðru ise Geçti yazýlýr ve sýradaki sözde kod ifadesi icra edilir. Koþul
yanlýþsa yazma iþlemi göz ardý edilir ve sonraki sözde kod icra edilir.

Bu isteðin C kodu:

if (not >= 50) {
	printf( "Gecti\n" );
}
þeklindedir. Sözde koda oldukça benzemektedir. 


The If...Else Statement
if seçim ifadesinin, yalnýzca koþul doðru olduðu zaman iþaret edilen eylemi yapar.
diðer türlü eylem atlanarak geçilir. if...else seçim ifadesinde ise koþul 
doðru olduðunda ve yanlýþ olduðunda yapýlacak farklý eylemleri icra eder.

{	Eðer öðrencinin notu 60' tan büyük veya eþitse
		"Geçti" Yaz
	
	Deðilse
		"Kaldý" Yaz
}

C kodu:
if (not >= 50) {
	puts( "Gecti\n" );
}
else {
	puts( "Kaldi" );
}
















*/