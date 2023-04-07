# Dijkstra_Algorithm
DİJKSTRA ALGORİTMASI

Dijkstra algoritması, tek kaynaklı en kısa yol problemi için kullanılan bir algoritmadır. Bu problemde, bir grafın belirli bir düğümünden diğer tüm düğümlere olan en kısa yolu bulmak istenir. Bu algoritma, özellikle haritalar, ağlar, yol ağları gibi birçok uygulamada kullanılır. Örneğin, bir haritada iki şehir arasındaki en kısa yolun bulunması gibi durumlarda Dijkstra algoritması kullanılabilir. Ayrıca, iletişim ağları, trafik yönetimi, hava trafik yönetimi, lojistik vb. birçok uygulama alanında kullanılmaktadır.
Dijkstra algoritması, bir başlangıç düğümü seçilir ve bu düğüme olan en kısa mesafeleri hesaplamaya başlar. Daha sonra, diğer tüm düğümleri bu başlangıç düğümüne olan mesafelerine göre sıralar. Sıralanmış düğümlerden bir sonraki en yakın düğümü seçer ve bu düğümün komşularına olan mesafeleri günceller. Bu işlem, tüm düğümler işlenene kadar devam eder.
Algoritma, bir öncül listesi ve bir mesafe listesi kullanır. Öncül listesi, her düğümün bir önceki düğümü gösterir ve mesafe listesi, her düğümün başlangıç düğümüne olan mesafesini tutar. Başlangıçta, öncül listesi ve mesafe listesi boştur.
Algoritmanın çalışması şu adımları içerir:
1. Başlangıç düğümü seçilir ve öncül listesi ve mesafe listesi güncellenir.
2. Tüm düğümler işlenene kadar şu adımlar tekrarlanır:
 En küçük mesafeye sahip düğüm seçilir.
 Bu düğümün tüm komşuları için mesafeler güncellenir.
Düğüm işlendi olarak işaretlenir.
3. En kısa yolların bulunması için öncül listesi kullanılır.


Dijkstra algoritması, grafın boyutuna bağlı olarak zaman karmaşıklığına sahip olabilir. Ancak, genellikle verimli bir algoritma olarak kabul edilir.
En iyi durumda, Dijkstra algoritması, başlangıç düğümüyle bitiş düğümü arasındaki en kısa yolun doğrudan belirlenebildiği durumlarda O(1) zaman karmaşıklığına sahiptir. Bu durum, iki düğüm arasında yalnızca bir kenar varsa veya başlangıç düğümü bitiş düğümüdür.
En kötü durumda, Dijkstra algoritması, tüm düğümleri içeren bir grafikte O(|E|+|V|log|V|) zaman karmaşıklığına sahiptir. Burada, |V|, grafikteki düğüm sayısını ve |E|, grafikteki kenar sayısını temsil eder. Bu karmaşıklık, algoritmanın her bir düğümünü ziyaret etmesi, her bir kenarın işlenmesi ve öncelik kuyruğu yapısının sıralanması ile ilişkilidir.
Ortalama durumda, Dijkstra algoritması, öncelik kuyruğu yapısının kullanımı nedeniyle O(|E|+|V|log|V|) zaman karmaşıklığına sahiptir. Ancak, grafik yapısı ve başlangıç düğümü ile bitiş düğümü arasındaki uzaklık gibi faktörlerin değişken olduğu göz önüne alındığında, ortalama durumun belirtilmesi zordur.
Dijkstra algoritmasının zaman karmaşıklığı, öncelik kuyruğu yapısının sıralanması için kullanılan veri yapısının türüne bağlıdır. Binary heap, Fibonacci heap gibi veri yapıları kullanarak, Dijkstra algoritmasının zaman karmaşıklığının iyileştirilmesi mümkündür.
