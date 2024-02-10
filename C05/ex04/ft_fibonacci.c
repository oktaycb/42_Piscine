#include <unistd.h>

int ft_fibonacci(int index)
{
    int value;

    // Eğer verilen indeks negatifse, -1 döndürüyoruz, çünkü Fibonacci dizisi negatif indekslerle tanımlanmaz.
    if (index < 0)
        return (-1);
    
    // Eğer indeks 0 ise, ilk Fibonacci sayısı 0 olduğu için 0 döndürüyoruz.
    if (index == 0)
        return (0);
    
    // Eğer indeks 1 ise, ikinci Fibonacci sayısı 1 olduğu için 1 döndürüyoruz.
    if (index == 1)
        return (1);
    else
    {
        // Eğer indeks 0 veya 1 değilse, Fibonacci dizisinin rekürsif olarak bir önceki iki elemanının toplamını hesaplıyoruz.
        value = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
        return (value);
    }
}
