int ft_sqrt(int nb)
{
    int racine = 1; // Karekökü bulmak için kullanılacak başlangıç değeri
    int sqrt = 0;   // Geçici olarak karesi hesaplanacak değer

    // Karekök bulma işlemi, 1'den başlayarak nb'nin yarısına kadar olan değerlerde yapılacak
    while (racine <= nb / 2)
    {
        sqrt = racine * racine; // Geçici değerin karesini al

        // Eğer karesi nb'ye eşitse, bu, nb'nin kareköküdür ve racine değeri döndürülür
        if (sqrt == nb)
        {
            return racine;
        }

        racine++; // Bir sonraki adıma geçmek için racine değerini artır
    }

    // Döngü tamamlandığında karekök bulunamamışsa, 0 döndürülür
    return 0;
}
