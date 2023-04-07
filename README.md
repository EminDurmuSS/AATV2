# AATV2
algoritma analizi ve tasaramı ödev
Alfa-beta budama algoritması, min-max ağacı yapısını kullanarak oyun ağaçlarında arama yapmak için kullanılan bir algoritmadır. Bu algoritma, en iyi hareketi seçmek için birçok seçenek arasında gezinir ve diğer seçenekleri önemsemeksizin sadece gerektiği kadar dallanma yapar.

Alfa-beta budama algoritmasının en iyi durumu, ağacın kökünden en az iki katmanın atlanması durumunda gerçekleşir. Bu durumda, sadece O(b) adım (b dallanma faktörü) gereklidir. En kötü durumda, algoritmanın çalışma zamanı O(b^d) olabilir, burada d derinliği ve b dallanma faktörüdür. Ortalama durumda ise, algoritmanın performansı, ağaç yapısına, dallanma faktörüne ve algoritmanın uygulanacağı problemin özelliklerine bağlı olarak değişir.

Alfa-beta budama algoritması, minimax algoritmasının geliştirilmiş bir versiyonu olduğundan, minimax algoritmasında da bahsedilen sınırlandırma teknikleri (alpha ve beta) kullanılır. Alpha, en iyi seçeneği belirlemek için kullanılırken, beta, en kötü seçenekleri önlemek için kullanılır. Bu sınırlar sayesinde, algoritma gereksiz dallanma ağaçlarını keserek, hesaplama süresini önemli ölçüde azaltabilir. Bu sınırları belirlemek için, herhangi bir düzeydeki minimum ve maksimum değerler saklanır ve bu değerler sınır olarak kullanılır. Algoritma bu sınırları aşarsa, diğer dalları hesaplamadan keser.

C++ dilinde, Alfa-beta budama algoritması genellikle rekürsif bir işlev olarak uygulanır. İşlev, minimax ağacını ve sınır değerlerini parametre olarak alır. Algoritma, her düzeydeki minimum ve maksimum değerleri günceller ve sınır değerlerini aşan dalları keser. İşlev sonunda, en iyi hareketi veya en iyi skoru döndürür.

Özetle, Alfa-beta budama algoritması, min-max ağacı yapısını kullanarak oyun ağaçlarında arama yapmak için kullanılan bir algoritmadır. En iyi durumda, algoritmanın çalışma zamanı O(b) olabilirken, en kötü durumda O(b^d) olabilir. Bu sınırlandırma teknikleri (alpha ve beta) kullanılarak, gereksiz dallanma ağaçları kesilerek hesaplama süresi önemli ölçüde azaltılabilir. C++ dilinde, algoritma genellikle rekürsif bir işlev olarak uygulanır.


Zhu-Takaoka algorithm, graf çizimi probleminde bir düğümün tüm çevresindeki düğümlerden en az bir kez geçerek çizilebilen en küçük dikdörtgen alanı bulmak için kullanılan bir algoritmadır. Bu algoritma, hem en iyi durumda hem de en kötü durumda lineer bir zamana sahiptir.

Zhu-Takaoka algoritması, iki adımdan oluşur: öncelikle, grafın en sağ alt düğümü tespit edilir ve bu düğüm silinir. Daha sonra, silinmiş düğüme kadar olan her düğümün yanındaki düğümlere ait x ve y koordinatları saklanır. Daha sonra, silinmiş düğüme kadar olan tüm düğümler, x koordinatlarına göre sıralanır ve y koordinatlarına göre tarama yapılarak en küçük dikdörtgen alan bulunur.

Zhu-Takaoka algoritmasının en iyi durumda sınırları, O(n) 'dir, burada n, düğümlerin sayısıdır. En kötü durumda, sınırları O(n^2)'dir, ancak bu durumun gerçekleşme olasılığı oldukça düşüktür. Ortalama durumda, sınırlar O(n log n) 'dir.


