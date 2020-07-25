struct data{
int depan, blk;
int nilai[3];
}antrian;
int i, pil;
main()

{clrscr();

antrian.depan=-1;

do {

puts ("1. cek antrian");

puts("2. tambah antrian");

puts ("3. mengurangi antrian");

puts ("4. exit");

printf("pilih menu = "); scanf("%d",&pil);

if (pil == 1){

if (antrian.depan == -1)

printf("antrian masih kosong");
else if ((antrian.depan > -1) && (antrian.blk < 2))

puts ("masih tersedia antrian kosong");

else puts ("antrian penuh");

} else if (pil == 2){

printf("input nilai = "); scanf("%d",&x);

if (antrian.depan == -1){

antrian.depan = 0;

antrian.blk = 0;

antrian.nilai[antrian.depan] = x;}

else if (antrian.depan > -1){

antrian.blk = antrian.blk+1;

antrian.nilai[antrian.blk] = x;}
} else if (pil == 3) {

puts ("antrian yg dikeluarkan adalah", antrian.nilai[antrian.depan]);

antrian.depan = antrian.depan+1;

if (antrian.depan == antrian.blk)

puts ("antrian depan saat ini adalah antrian terakhir");

puts ("antrian depan saat ini indeks , nilai ",antrian.depan,
antrian.nilai[antrian.depan]);

} else if (pil == 4)

puts ("selesai");

} while (pil != 4);

return 0;
}