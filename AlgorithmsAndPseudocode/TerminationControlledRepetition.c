/*


* Kod örneği en aşağıdadır


Yukarıdan aşağı, adım adım düzenleyerek algoritmaların formüle 
edilmesi. 2. Olarak sonlandırma kontrollü tekrarlama ile 
yapılabilir.

Yine bir sınıfta alınan notların sınıf ortalamasının hesaplanacağı
program yazılması gereksin. Ama bu sefer kaç tane not girileceğini
bilmezsek programı nasıl yazabiliriz ?
Yani tekrarlı işlemin kaç defa edeceğini önceden bilmediğimiz 
zamanlarda ne yapabiliriz ? 

Kullanıcıya döngüyü sonlandıran bir değer bilgisini veririz. Bu 
sayede kullanıcı tekrarladığı işlemin sonuna geldiğinde yani yeni
bir not girmeyeceği zaman bu değeri girerek tekrarlamayı sonlandırır.

Tabi dikkat edilmesi gereken önemli bir şey de; Sonlandırma ifadesinin
normalde girilebilecekl değerler kümesinde olmaması gerekir.

Örnek olarak not girilen bir uygulamada, sonlandırma değeri 5 seçilirse ve
girilen notlardan biri de 5 olursa bu sefer program sonlanacak ve 
istenen işlem olması gerektiği gibi sonuç veremeyecektir. Bu durumlarda
mantıklı olan notlandırma içersininde olmayan bir değeri sonlandırma
ifadesi olarak tanımlamaktır. Mesela notların (0-100 olduğu bir sınavda)
-5 bir sonlandırma değeri olarak kullanılabilir.

Not: Bu tarz durumlara Belirsiz Tekrarlama denir.


#### YUKARIDAN AŞAĞIYA ADIM ADIM DÜZENLEME ####

Üst kısmı temsil eden sözde kod ifadesi ile programın sözde kod yazımına başlıyoruz.

Sınav için sınıf ortalamasını belirle

Üst, programın genel fonksiyonunu taşıyan tek bir ifadedir. Maalesef, üst nadirden
C programı yazmak için yeterli miktarda detay içerir. Bunun için düzenleme sürecinde
başlarız. Üstü, bir dizi daha küçük görevlere ayırırız ve bunları hangi sırada icra
edilmesi gerekiyorsa o sırada belirtiriz. Bu da ilk aşağıdaki gibi sonuçlanır.

Değişkenlere başlangıç değeri ata
Sınav notlarını gir, topla ve say
Sınıf ortalamasını hesapla ve yaz

Burada yalnızca sıralı yapı kullanılmıştır - listelenmiş adımlar biri diğerinden
sonra olacak şekilde sırayla yürütülecektir. 

Not: Üst kısmın yanı sıra, aslında her bir düzenleme algoritmanın tam bir 
tanımlamasıdır; sadece detay seviyeleri farklılık gösterir. 


2. DÜZENLEME

2. düzenleme seviyesine ilerlemek için, özel değişkenleri belirtiriz. Sayıların peşpeşe
toplamına, kaç tane sayının işlendiği sayımına, giriş olarak her bir notun değerini
alan bir değişken ve hesaplanmış ortalamayı tutan bir değişkene ihtiyacımız olacak.

Değişkenlere başlangıç değeri ata ----> bu sözde kod alağıdaki gibi düzenlenebilir.

Başlangıç değeri olarak toplama sıfır ata
Başlangıç değeri olarak sayaca sıfır ata

Not: Yalnızca toplam ve sayaca sıfır değeri atadık. Çünkü diğerleri için bu önemsizdir.
Yok edici okuma işlemi ile diğerlerinin üzerine yeni değerler yazılacağı için, eski 
değerlerinin önemi yoktur. 


Sınav için notlarını gir, topla ve say -----> Bu sözde kod ifadesi ardışık olarak

her bir notu giren bir tekrarlama yapısına gerek duyar. Önceden kaç tane notun 
işleneceğini bilmediğimiz için, sonlandırma kontrollü tekrarlama kullanacağız. 
Program, her bir not girildikten sonra bu değerle karşılaştırılacak ve sonlandırma
değeri girildiği zaman döngüyü sonlandıracaktır. 

Yukarıdaki sözde kod ifadesini aşağıdaki gibi düzenleyeliö

İlk notu gir
Kullanıcı sonlandırmayı henüz girmediyse
	Bu notu işleyen toplama ekle
	Not sayacına bir ekle
	Sonraki notu gir (sonlandırma olması mümkün)


Görüldüğü gibi sözde kod ifadesinde while için süslü parantez kullanmadık. Ama while'a
ait olduğunu göstermek için bunlar için bir satır boşluk bıraktık. 

Sınıf ortalamasını hesapla ve yaz -----> sözde kodu aşağıdaki gibi düzenleyelim.

Sayaç sıfıra eşit değilse
	Ortalamaya toplamın sayaca bölümüne eşitle
	Ortalamayı yaz
Değilse
	"Hiç bir not girilmemiştir" yaz


Not: Burada, sıfıra bölme- eğer farkedilmezse programın başarısız olmasına sebep
olur. Genelde programın çökmesi olarak adlandırılır. 


####  SÖZDE KODUN TAMAMI  #### (son hali)


1)  Başlangıç değeri olarak toplama sıfır ata
2)  Başlangıç değeri olarak sayaca sıfır ata
3)
4)  İlk notu gir
5)  Kullanıcı sonlandırmayı henüz girmediyse
6)		Bu notu işleyen toplama ekle
7)		Not sayacına bir ekle
8)		Sonraki notu gir (sonladırma olması mümkün)
9)
10)  Sayaca sıfır eşit değilse
11)		Ortalamayı toplamın sayaca bölümüne eşitle
12)		Ortalamayı yaz
13)  Değilse
14)		"Hiç bir not girilmeiştir" yaz


*/

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int counter;; // sayac
//	int grade; //girilecek not
//	int total; //girilen notlarin toplami
//	
//	float average; //notlarin ortalamasi (float = ondalikli sayilari tutar
//
//	//baslangic kismi
//	total = 0; //total'in baslangic degerini 0 yapar
//	counter = 0; //sayac'in baslangic degerini 0 yapar
//
//
//	//islem kismi
//	//kullanicidan ilk notun alinmasi
//	printf("%s", "Enter grade, -1 to end: "); //not girisini ister
//	scanf_s("%d", &grade); //girilen degeri okur
//
//
//	//kullanicidan henuz sonlandirma degeri girilmediyse donguye gir
//	while (grade != -1)
//	{
//		total = total + grade;
//		counter = counter + 1;
//
//		//hala dongudeyken kullanicidan sonraki notu al
//		printf("%s", "Enter grade, -1 to end: ");
//		scanf_s("%d", &grade); 
//	}
//
//	//sonlandirma kismi
//	//kullanici en az bir not girdiyse
//	if (counter != 0)
//	{
//		//girilen tum notlar icin ortalamayi hesapla
//		average = (float)total / counter; //ondalik kismin atilmasini engelle
//
//		//ortalamayi virgulden sonra iki basamak icin goster
//		printf("\n###### RESULT ######\nClass average is %.2f\n", average);
//	}
//	else {//hicbir not girilmediyse
//		puts("\n###### RESULT ######\nNo grades were entered");
//	}
//}



/*
Örnek koddaki while gibi eğer birden fazla ifadeyi while içerisinde yürütmek istersek
küme parantezlerini kullanmak zorunludur. Parantezler kullanılmadığında, döngü gövedsindeki
ilk ifade haricindekiler döngü dışında kalır. 

Eğer yukarıdaki örnek kodda while'ı küme parantezleri ile kullanmasaydık sonsuz döngü
oluşacaktı. Bu da eğer kullanıcı ilk notu -1 olarak girmeseydi sonsuz döngüye takılıp,
programın hata vermesine neden olacaktı.


+++++ TÜRLER ARASINDA AÇIK VE DOLAYLI DÖNÜŞÜM +++++

Hesaplamamızın kesirli kısmını yakalamak için average değişkenini float türünden
tanımlamıştık. Bununla birlikte total ve counter değişkenleri de int türünden olduğu
için total / counter işleminin sonucu da tam sayı olacaktır. Yani average float olsa 
da bölme işlemindeki değişkenler int olduğu için sonucun virgüllü kısımları kaybolacaktır.
Tam sayı değerlerle, bir ondalık hesaplama üretmek için, ondalık sayı olan geçici
değerler oluşturmak zorundayız. C' de bu görevi yapan tür dönüştürme işlemi sağlar.

average = (float) total / counter;

total teriminin geçici bir ondalık kopyasını oluşturan (float) tür dönüştürme işlemi
içerir. Tür dönüştürme işleminin bu şekilde kullanımına açık dönüşüm denir. Hesaplama
şimdi, counter' da saklanan unsigned int değişkenine bölünen ondalık bir değer 
(total'in geçici float hali) içerir. C, yalnızca terimlerin veri türleri aynı olan
aritmetik işlemleri gerçekleştirir. Terimlerin aynı türden olmasını sağlamak için,
derleyici sçeilmiş terimler üzerinde dolaylı dönüşüm denen bir işlem yapar. 
Örneğin, unsigned int ve float veri türleri içeren bir ifade de, unsigned int terim-
lerinin kopyaları yapılır ve float'a dönüştürülür. Örneğimizde, counter' ın bir
kopyası yapıldıktan ve float'a dönüştürüldükten sonra hesaplama icra edilir ve ondalık
bölmenin sonucu average'a aktarılır. C'de farklı türlerden terimlerin dönüşümleri
için bir dizi kurallar vardır. Bunlardan ilerde daha fazla bahesedeceğiz.



(float) total gibi dönüşümlere açık (explicit) tür dönüşümü denir. 
Bunu kendimiz  yazarız.

total float olunca, counter'ın float’a dönüştürülmesine ise dolaylı (implicit)
tür dönüşümü denir. Bu dönüşümü C derleyicisi otomatik yapar.


Tür dönüşüm işlemi çoğu veri tipine uygulanır - tür ismi etrafında parantez koyarak
oluşturulur. Her bir tür dönüşüm işlemi tekil bir işlemdir, yani tek bir terimi olan
bir işlemdir. C, aynı zamanda artı (+) ve eksi (-) işlemlerinin tekil hallerini de
destekler, böylece -10 veya +11 gibi ifadeler  yazabiliriz. 
Tür dönüşüm işlemleri sağdan sola doğru yapılır ve tekil + ve tekil - gibi diğer
tekil işlemlerle aynı önceliğe sahiptir. Bu öncelik *,/ ve % çarpımsal işlemlerinin-
kinden daha yüksektir. 

Yani bir sayının negatif mi pozitif mi olduğu belirten - ve + işaretinin öncelikli
olması gerekir ki bir işlem içerisinde sayının pozitif mi negatif mi olduğu önceden
belirlenmiş olsun ve de ona göre işlem yapılsın.



+++++ ONDALIK SAYILARI BİÇİMLENDİRME +++++
average'ın değerini yazmak için %.2f çevrim belirtecini kullanmıştık. 
f bir ondalık değerin yazılacağı belirtir. .2 de, değerin gösterileceği kesinliktir-
virgülden sonra 2 basamaklı-. %f çevirm belirteci kullanılırsa (kesinlik değeri 
belirtmeden), tanımlı olan 6 kesinlik değeri kullanılır. - %.6f çevrim belirteci 
kullanılmasıyla tamamen aynıdır- . Ondalık değerler belirli bir kesinlikle yazıldığı
zaman, yazılacak değer işaret edilen sayının virgülden sonraki yerine vurgulanır.
Hafızadaki yeri değişmez. Aşğıdaki ifadeler çalıştığı zaman, 3.45 ve 3.4 değerlerini
yazacaktır.


printf ( "%.2f\n", 3.446 ); // 3.45 yazar
printf ( "%.1f\n", 3.446 ); // 3.4 yazar

Not: 3.446 → 2 basamaklı hale yuvarlandığında 3.45 olur 
(çünkü son rakam 6, yani ≥ 5). Eğer sayı 3.444 olsaydı, çıktı 3.44 olurdu.








*/
