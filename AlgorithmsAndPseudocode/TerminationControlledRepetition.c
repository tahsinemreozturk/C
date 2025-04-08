/*


* Kod örneði en aþaðýdadýr


Yukarýdan aþaðý, adým adým düzenleyerek algoritmalarýn formüle 
edilmesi. 2. Olarak sonlandýrma kontrollü tekrarlama ile 
yapýlabilir.

Yine bir sýnýfta alýnan notlarýn sýnýf ortalamasýnýn hesaplanacaðý
program yazýlmasý gereksin. Ama bu sefer kaç tane not girileceðini
bilmezsek programý nasýl yazabiliriz ?
Yani tekrarlý iþlemin kaç defa edeceðini önceden bilmediðimiz 
zamanlarda ne yapabiliriz ? 

Kullanýcýya döngüyü sonlandýran bir deðer bilgisini veririz. Bu 
sayede kullanýcý tekrarladýðý iþlemin sonuna geldiðinde yani yeni
bir not girmeyeceði zaman bu deðeri girerek tekrarlamayý sonlandýrýr.

Tabi dikkat edilmesi gereken önemli bir þey de; Sonlandýrma ifadesinin
normalde girilebilecekl deðerler kümesinde olmamasý gerekir.

Örnek olarak not girilen bir uygulamada, sonlandýrma deðeri 5 seçilirse ve
girilen notlardan biri de 5 olursa bu sefer program sonlanacak ve 
istenen iþlem olmasý gerektiði gibi sonuç veremeyecektir. Bu durumlarda
mantýklý olan notlandýrma içersininde olmayan bir deðeri sonlandýrma
ifadesi olarak tanýmlamaktýr. Mesela notlarýn (0-100 olduðu bir sýnavda)
-5 bir sonlandýrma deðeri olarak kullanýlabilir.

Not: Bu tarz durumlara Belirsiz Tekrarlama denir.


#### YUKARIDAN AÞAÐIYA ADIM ADIM DÜZENLEME ####

Üst kýsmý temsil eden sözde kod ifadesi ile programýn sözde kod yazýmýna baþlýyoruz.

Sýnav için sýnýf ortalamasýný belirle

Üst, programýn genel fonksiyonunu taþýyan tek bir ifadedir. Maalesef, üst nadirden
C programý yazmak için yeterli miktarda detay içerir. Bunun için düzenleme sürecinde
baþlarýz. Üstü, bir dizi daha küçük görevlere ayýrýrýz ve bunlarý hangi sýrada icra
edilmesi gerekiyorsa o sýrada belirtiriz. Bu da ilk aþaðýdaki gibi sonuçlanýr.

Deðiþkenlere baþlangýç deðeri ata
Sýnav notlarýný gir, topla ve say
Sýnýf ortalamasýný hesapla ve yaz

Burada yalnýzca sýralý yapý kullanýlmýþtýr - listelenmiþ adýmlar biri diðerinden
sonra olacak þekilde sýrayla yürütülecektir. 

Not: Üst kýsmýn yaný sýra, aslýnda her bir düzenleme algoritmanýn tam bir 
tanýmlamasýdýr; sadece detay seviyeleri farklýlýk gösterir. 


2. DÜZENLEME

2. düzenleme seviyesine ilerlemek için, özel deðiþkenleri belirtiriz. Sayýlarýn peþpeþe
toplamýna, kaç tane sayýnýn iþlendiði sayýmýna, giriþ olarak her bir notun deðerini
alan bir deðiþken ve hesaplanmýþ ortalamayý tutan bir deðiþkene ihtiyacýmýz olacak.

Deðiþkenlere baþlangýç deðeri ata ----> bu sözde kod alaðýdaki gibi düzenlenebilir.

Baþlangýç deðeri olarak toplama sýfýr ata
Baþlangýç deðeri olarak sayaca sýfýr ata

Not: Yalnýzca toplam ve sayaca sýfýr deðeri atadýk. Çünkü diðerleri için bu önemsizdir.
Yok edici okuma iþlemi ile diðerlerinin üzerine yeni deðerler yazýlacaðý için, eski 
deðerlerinin önemi yoktur. 


Sýnav için notlarýný gir, topla ve say -----> Bu sözde kod ifadesi ardýþýk olarak

her bir notu giren bir tekrarlama yapýsýna gerek duyar. Önceden kaç tane notun 
iþleneceðini bilmediðimiz için, sonlandýrma kontrollü tekrarlama kullanacaðýz. 
Program, her bir not girildikten sonra bu deðerle karþýlaþtýrýlacak ve sonlandýrma
deðeri girildiði zaman döngüyü sonlandýracaktýr. 

Yukarýdaki sözde kod ifadesini aþaðýdaki gibi düzenleyeliö

Ýlk notu gir
Kullanýcý sonlandýrmayý henüz girmediyse
	Bu notu iþleyen toplama ekle
	Not sayacýna bir ekle
	Sonraki notu gir (sonlandýrma olmasý mümkün)


Görüldüðü gibi sözde kod ifadesinde while için süslü parantez kullanmadýk. Ama while'a
ait olduðunu göstermek için bunlar için bir satýr boþluk býraktýk. 

Sýnýf ortalamasýný hesapla ve yaz -----> sözde kodu aþaðýdaki gibi düzenleyelim.

Sayaç sýfýra eþit deðilse
	Ortalamaya toplamýn sayaca bölümüne eþitle
	Ortalamayý yaz
Deðilse
	"Hiç bir not girilmemiþtir" yaz


Not: Burada, sýfýra bölme- eðer farkedilmezse programýn baþarýsýz olmasýna sebep
olur. Genelde programýn çökmesi olarak adlandýrýlýr. 


####  SÖZDE KODUN TAMAMI  #### (son hali)


1)  Baþlangýç deðeri olarak toplama sýfýr ata
2)  Baþlangýç deðeri olarak sayaca sýfýr ata
3)
4)  Ýlk notu gir
5)  Kullanýcý sonlandýrmayý henüz girmediyse
6)		Bu notu iþleyen toplama ekle
7)		Not sayacýna bir ekle
8)		Sonraki notu gir (sonladýrma olmasý mümkün)
9)
10)  Sayaca sýfýr eþit deðilse
11)		Ortalamayý toplamýn sayaca bölümüne eþitle
12)		Ortalamayý yaz
13)  Deðilse
14)		"Hiç bir not girilmeiþtir" yaz


*/

#include <stdio.h>

int main(void)
{
	unsigned int counter;; // sayac
	int grade; //girilecek not
	int total; //girilen notlarin toplami
	
	float average; //notlarin ortalamasi (float = ondalikli sayilari tutar

	//baslangic kismi
	total = 0; //total'in baslangic degerini 0 yapar
	counter = 0; //sayac'in baslangic degerini 0 yapar


	//islem kismi
	//kullanicidan ilk notun alinmasi
	printf("%s", "Enter grade, -1 to end: "); //not girisini ister
	scanf_s("%d", &grade); //girilen degeri okur


	//kullanicidan henuz sonlandirma degeri girilmediyse donguye gir
	while (grade != -1)
	{
		total = total + grade;
		counter = counter + 1;

		//hala dongudeyken kullanicidan sonraki notu al
		printf("%s", "Enter grade, -1 to end: ");
		scanf_s("%d", &grade); 
	}

	//sonlandirma kismi
	//kullanici en az bir not girdiyse
	if (counter != 0)
	{
		//girilen tum notlar icin ortalamayi hesapla
		average = (float)total / counter; //ondalik kismin atilmasini engelle

		//ortalamayi virgulden sonra iki basamak icin goster
		printf("\n###### RESULT ######\nClass average is %.2f\n", average);
	}
	else {//hicbir not girilmediyse
		puts("\n###### RESULT ######\nNo grades were entered");
	}
}