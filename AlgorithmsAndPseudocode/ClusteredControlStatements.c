/*
	Aþaðýdaki problem ifadesini göz önüne alalým
Bir okul, öðrencileri emlakçý sertifika sýnavýna hazýrlayan bir ders açýyor. Geçen
sene bu dersi tamamlayan öðrencilerden 10' u sertifka sýnavýna girdi. Doðal olarak,
okul öðrencilerin sýnavý ne kadar iyi yaptýklarýný bilmek istiyor. Sonucu özetleyen
bir program yazmanýz isteniyor. Bu 10 öðrencinin listesi size verilmiþtir. Her bir
ismin yanýna eðer öðrenci sýnavý geçtiyse 1 kaldýysa 2 yazýlmýþtýr. 

Programýnýz sýnav sonuçlarýný aþaðýdaki gibi analiz etmelidir:
1. Her bir sýnav sonucunu girin (örneðin 1 veya 2). Program baþka bir sýnav sonucu
istediði her sefer "Enter Result" istem mesajýný gösterin.

2. Her tür sýnav sonucunu sayýn

3. Geçen öðrencilerin sayýsýný ve kalanlarýn sayýsýný iþaret eden sýnav sonuçlarýný-
nýn özetini gösterin.

4. Sekiz öðrenciden fazlasý sýnavý geçtiyse "Bonus to instructor!" mesajýný yazýn.


Yukarýdan aþaðý, adým adým düzenleme ile ilerleyelim. Üst kýsmýn sözde kod kýsmý ile
baþlarýz.

	Sýnav sonuçlarýný analiz et ve hocanýn ödül alýp almadýðýna karar ver

Bir kez daha, üst programýn tam bir temsili olduðunu, ancak sözde kodun doðal bir
þekilde C' ye dönüþebilmesinden önce bir kaç düzenlemeye ihtiyaç olabileceðini 
vurgulamak gerekir. Ýlk düzenlememiz

	Deðiþkenlerin baþlangýç deðerlerini ata
	On sýnav notunu gir ve geçenleri ve kalanlarý say
	Sýnav sonuçlarýnýn özetini yaz ve hocanýn bir ödül alýp alamayacaðýna karar ver

Burda da, tüm programýn tam bir temsiline sahip olsak bile, daha fazla düzenleme 
gereklidir. Þimdi özel deðiþkenler belirleriz. Geçenleri ve kalanlarý kayýt eden 
sayaçlara ihtiyaç olacak, bir sayaç döngü sürecini kontrol etmek için kullanýlacak
ve kullanýcý giriþini saklamak için bir deðiþkene ihtiyaç duyar.

Deðiþkenlere  baþlangýç deðerleri ata ----> Sözde kodunu aþaðýdaki gibi tanýmlanabilir

	Baþlangýç deðeri olarak geçenlere sýfýr ata
	Baþlangýç deðeri olarak kalanlara sýfýr ata
	Baþlangýç deðeri olarak öðrenciye bir ata

Sayaçlara ve toplamlara baþlangýç deðerleri verildiðini görmüþsünüzdür. 

	On sýnav notunu gir ve geçenleri ve kalanlarý say

sözde kodu her sýnav notunu arka arkaya giren bir döngüyü gerektirir. Burada, kesin
olarak on sýnav sonucu olduðu önceden biliniyor, bu nedenle sayaç kontrollü döngü
uygundur. Döngü içinde (döngü içerisindeki kümelenme), bir çift seçim ifadesi, her
bir sýnav sonucunun baþarýlý veya baþarýsýz olup olmadýðýna karar verecek ve buna
göre sayaçlarý uygun olarak bir arttýracak. Yukarýdaki sözde kodun düzenlemesi :

	Öðrenci sayacý on'dan küçük veya eþit olduðu sürece
	 Sonraki sýnav sonucunu gir

	 Eðer öðrenci geçtiyse
				Geçenlere bir ekle
	 Deðilse
				Kalanlara bir ekle

	 Öðrenci sayacýna bir ekle

gibi olur.

if...else'i baþlatmak için boþ satýr kullanýmýnýn program okunabilirliðini iyileþ-
tirdiðini fark etmiþsinizdir. 

	Sýnav sonuçlarýnýn özetini yaz ve hocanýn bir ödül alýp alamayacaðýna karar ver
sözde kodu aþaðýdaki gibi düzenlenebilir:

	Geçenleri yaz
	Kalanlarý yaz
	Eðer sekiz öðrencinden fazlasý geçti ise
		"Hocaya ödül!" yaz


ÝLÝGÝLÝ SÖZDE KODUN BÜTÜN VE SON HALÝ

1 Baþlangýc deðeri olarak geçenlere sýfýr ata
2 Baþlangýç deðeri olarak kalanlara sýfýr ata
3 Baþlangýç deðeri olarak öðrenciye bir ata
4
5 Öðrenci sayacý on'dan küçük veya eþit olduðu sürece
6	Sonraki sýnav sonucunu gir
7
8	Eðer öðrenci geçtiyse
9		Geçenlere bir ekle
10	Deðilse
11		Kalanlara bir ekle
12
13	Öðrenci sayacýna bir ekle
14
15 Geçenleri yaz
16 Kalanlarý yaz
17 Eðer sekiz öðrenciden fazlasý geçti ise
18		"Hocaya ödül!" yaz



Bu sözde kod þimdi C'ye dönüþüm için yeterlidir. 




*/