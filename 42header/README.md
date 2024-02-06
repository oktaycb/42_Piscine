# 42Header Kurulum
C projeleri için zorunlu olan header'ı bu doküman ve dosyalar yardımıyla kurabilirsiniz.<br>
```vim
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:53:09 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/06 14:53:35 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```
# Kurulum Adımları
1-> iTerm2'yi açın<br>
2-> Terminalden masaüstüne gelin<br>
3-> Terminale `git clone (link)` komutunu girin ve dosyaları indirin<br>
4-> İndirdiğiniz klasörün içine girin<br>
5-> Terminalden `sh create_header.sh` komutu ile shell dosyasını çalıştırın<br>
6-> Terminale `cd` komutunu yazarak root'a dönün<br>
7-> Terminale  `vim .vimrc` komutunu girin<br>
8-> Açılan sayfaya altta bulunan değerleri yazın

------------

    syntax on
    :set number
    let g:user42 = 'username'
    let g:mail42 = 'username@student.42.fr'

------------

10-> İşlemi tamamladıktan sonra `:wq / :wq!` komutu ile terminalden çıkın<br>
11-> Oluşturduğunuz dosyalara header'ınızı çekmek için `:Baslik` yazıp enterlamalısınız.

