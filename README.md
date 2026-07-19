 $$$$$$\   $$$$$$\  $$$$$$$$\ $$$$$$$$\  $$$$$$\  $$\   $$\ $$$$$$\ 
$$  __$$\ $$  __$$\ \____$$  |$$  _____|$$  __$$\ $$ | $$  |\_$$  _|
$$ /  \__|$$ /  $$ |    $$  / $$ |      $$ /  \__|$$ |$$  /   $$ |  
\$$$$$$\  $$ |  $$ |   $$  /  $$$$$\    \$$$$$$\  $$$$$  /    $$ |  
 \____$$\ $$ |  $$ |  $$  /   $$  __|    \____$$\ $$  $$<     $$ |  
$$\   $$ |$$ |  $$ | $$  /    $$ |      $$\   $$ |$$ |\$$\    $$ |  
\$$$$$$  | $$$$$$  |$$$$$$$$\ $$$$$$$$\ \$$$$$$  |$$ | \$$\ $$$$$$\ 
 \______/  \______/ \________|\________| \______/ \__|  \__|\______|
                                                                    
                                                                    
                                                                    
                                                                                                  
                                                                                                  

Bu proje, 4x4'lük bir alanda gökdelenlerin yüksekliğine ve bakış açısına göre doğru dizilimi bulmayı amaçlayan bir mantık bulmacası çözücüsüdür. Proje, tamamen C dili ile geliştirilmiştir.

## Proje Hakkında
Bulmacanın temel mantığı, her satır ve sütunda 1'den 4'e kadar her sayıdan tam birer tane bulunmasıdır. Dışarıdan bakıldığında görünen bina sayıları, gökdelenlerin boylarına göre belirlenir (yüksek binalar, arkasındaki kısa binaları saklar). 

Program, kullanıcıdan aldığı 16 adet ipucu değerini işleyerek geçerli çözüm kombinasyonunu hesaplar ve ekrana yazdırır.

## Özellikler
- **Algoritma:** Olası tüm dizilimleri denemek yerine mantıksal kısıtlamaları kullanan "Backtracking" (Geri İzleme) algoritması ile çalışır.
- **Modüler Yapı:** Kod, okunabilirliği artırmak için kontrol, çözümleme ve yardımcı fonksiyonlar olarak dosyalara bölünmüştür.
- **Hata Yönetimi:** Geçersiz girdileri veya çözüm bulunamayan senaryoları algılayarak kullanıcıyı bilgilendirir.

## Kullanım

Projeyi CLion veya herhangi bir C derleyicisi (gcc/clang) üzerinden derleyebilirsiniz.

**Derleme (Terminal üzerinden):**
```bash
cc -Wall -Wextra -Werror sources/*.c -Iincludes -o skyscraper-game-c
Çalıştırma:
Programı çalıştırmak için 16 karakterden oluşan (aralarında boşluk olan) bir dizi argüman vermeniz gerekmektedir:

Bash
./skyscraper-game-c "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
Teknik Notlar
Geliştirme Ortamı: CLion (CMake ile konfigüre edilmiştir).

Dil: C

Kütüphaneler: Standart C kütüphaneleri (unistd.h, stdlib.h) kullanılmıştır.

Geliştirici: Şebnem Özeşki
