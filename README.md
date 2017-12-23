# GDB (GNU-GDB)

GDB dipake buat mengetahui error yang ada.
cara kerjanyadengan manaruh breakpoint pada line yang diinginkan, lalu run program tersebut.
program akan berhenti pada point tersebut dan dapat dilanjutkan ke line selanjutnya dengan 'next'.
saat pengamatan inilah GDB sangat bermanfaat karena dapat mengamati hasil variable pada line tersebut dengan 'print'.

percobaan ini dilakukan bareng thomas wismoyo, menggunakan file montecarlo.cpp pada unix.

referensi saya ambil dari file tutorial GDB.
GDB commands dapat dilihat pada file tutorial.

percobaan ini mencoba untuk mengerti GDB dan mencoba commands yang ada.

breakpoint dibutuhkan peletakannya dengan cermat.

masuk gdb
![gambar1](https://github.com/kevinsagita/GDB/blob/master/gambar/1.jpg)

coba-coba commands
![gambar2](https://github.com/kevinsagita/GDB/blob/master/gambar/2.jpg)

![gambar3](https://github.com/kevinsagita/GDB/blob/master/gambar/3.jpg)

pemeriksaan selesai dan dapat keluar dari gdb.



progress buat assembly nya, ngelihat dari https://www.youtube.com/watch?v=wIuZajISL-E

buat nampilin assembly yang ada, menggunakan "disass" for display assembly.
nanti bakal keluar alamat dan apa saja langkah yang dipake buat menjalankan program tersebut.

buat debug output (nampilin output yang ada), bisa pake "print &__".
nanti bakal keluar alamat untuk output __ tersebut.

untuk melanjutkan debugin pada assembly, bisa menggunakan "nexti". nanti bakal lanjut ke output berikutnya.
breakpoint disini buat tau baris mana pada disass yang merupakan breakpoint yang dimaksud.
buat liat register yang ada pake "info reg".



untuk parsing saya belajar dari caranya gozal.. semoga benar :)
jadi itu buat tau input kita ada di "keyword" yang dibikin apa nga, per kata nya.
