# D&D Karakter Yaratıcı

Bu yazdığım kod, Dungeons & Dragons oyunu için karakter oluşturma algoritmasıdır. Bu kod, D&D oyunlarınızda karakterlerinizi oluştururken yetenek puanları için zar atma işlemlerinizi otomatik olarak gerçekleştiren bir algoritmayı içermektedir. Oluşturulan karakter ve yetenek puanları "character.txt" adlı bir dosyaya otomatik olarak kaydedilir.

## Kullanım

MacOS kullanan kullanıcılar Xcode kullanarak da açabilirler. Ayrıca Visual Studio, Clion, DevC++, Codeblocks gibi derleyicilerde de açmanız mümkündür.
! Xcode üzerinde  Product-Scheme-Edit Scheme-Use custom working directory sekmesinden text dosyasını kaydedeceği yeri seçebilirsiniz, Ayrıca terminal üzerinden de görebilirsiniz.

## Algoritma Açıklaması

### dice.cpp - dice.h

Bu kütüphane, karakter oluşturmak için gerekli zar atma işlemlerini ve doğrulamalarını içerir. Her karakter için 6 adet yetenek bulunmaktadır:

- Level
- Strength
- Dexterity
- Constitution
- Intelligence
- Wisdom
- Charisma

Her yetenek için 4 adet 6 yüzlü zar atılır ve en yüksek üçü toplanır. Bu adımda, kod tüm zarların toplamından en küçük zarı çıkarır. Eğer 6 yetenek puanı da 14'ten düşükse, bu işlem tekrarlanır.

### character.cpp - character.h

Bu dosya, oyuncunun oluşturacağı karakter için bir karakter nesnesi yaratır. Karakter nesnesi, karakterin yetenek puanlarını, sınıfını ve ırkını tutan değişkenler ve get/set metotları içerir.

### choose.cpp - choose.h

Bu dosya, karakterin sınıfını ve ırkını seçtiğimiz yerdir. Sonrasında topladığımız yetenek puanlarını istediğimiz yeteneğe verebiliriz. Yetenek puanları, zar atılan sonuca göre hesaplanır. Her 2 puan, 1 artar ve 10, 0 olarak kabul edilir. Her karakter sınıfı ve ırkına göre yeteneklerine eksi veya artı puanlar kazanabilir ve bu puanlar, son oluşturulan karaktere eklenir.

### main.c

Algoritmanın akışı burada kontrol edilir ve oluşturulan karakter metin dosyasına kaydedilir.

## Lisans

Bu proje MIT Lisansı altında lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasını kontrol edin.

---

Projeyi geliştirirken eğlendim ve umarım siz de keyif alırsınız! Herhangi bir sorunuz veya geri bildiriminiz varsa, lütfen bana ulaşmaktan çekinmeyin.
