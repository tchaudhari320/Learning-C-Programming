float isi1(float x, int y) {
if (y==0){ return 1;}
else if (y>0) { return isi1(x,-y);}
else { return isi1(x, y+1)/x;}
}
