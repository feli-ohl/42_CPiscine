cat /etc/passwd | cut -d : -f 1 | sed '1~2d' | rev | sort -dr | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -s -d ',' | sed 's/,/, /g' | sed 's/$/./g'
