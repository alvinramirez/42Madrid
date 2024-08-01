export FT_LINE1=7
export FT_LINE2=15

cat /etc/passwd | \
grep -v '^#' | \
awk 'NR % 2 == 0' | \
cut -d ':' -f 1 | \
rev | \
sort -r | \
sed -n "${FT_LINE1},${FT_LINE2}p" | \
paste -sd ", " - | \
sed 's/$/./' | \
tr -d '\n'
