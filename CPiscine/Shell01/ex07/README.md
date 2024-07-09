-------------------------------------------------------------------------------------------------------------------------

Ejercicio Shell01 ex07

-------------------------------------------------------------------------------------------------------------------------

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
echo "${result}."

-------------------------------------------------------------------------------------------------------------------------

export FT_LINE1=7
export FT_LINE2=15

Las primeras lineas de export definen las variables de entorno FT_LINE1 y FT_LINE2 con los valores 7 y 15 como lo dice el ejemplo, 
respectivamente, estos valores determinan el rango de líneas que se seleccionará más adelante

-------------------------------------------------------------------------------------------------------------------------

cat /etc/passwd | \

Usa cat para leer el contenido del archivo /etc/passwd

-------------------------------------------------------------------------------------------------------------------------

grep -v '^#' | \

Elimina las lineas que comienzan con '#' osea los comentarios

-------------------------------------------------------------------------------------------------------------------------

awk 'NR % 2 == 0' | \

Selecciona una de cada dos líneas, comenzando por la segunda

-------------------------------------------------------------------------------------------------------------------------

cut -d ':' -f 1 | \

Extrae el nombre de usuario (el primer campo antes del primer :)

-------------------------------------------------------------------------------------------------------------------------

rev | \

Invierte cada nombre de usuario como lo pide el ejercicio

-------------------------------------------------------------------------------------------------------------------------

sort -r | \

Ordena los nombres de usuario en orden alfabetico inverso

-------------------------------------------------------------------------------------------------------------------------

sed -n "${FT_LINE1},${FT_LINE2}p" | \

Selecciona el rango de lineas como se define en el inicio

-------------------------------------------------------------------------------------------------------------------------

paste -sd ", " - | \

Une todas las líneas seleccionadas en una sola línea, separándolas con ","

-------------------------------------------------------------------------------------------------------------------------

echo "${result}."

Añade un punto al resultado al final

Nota: para que quede claro los simbolos del final "|" se utiliza para encadenar comandos en otras palabras para unirlos, 
y el "\" al final, se utiliza para continuar la linea de comandos en la siguiente linea en el script de shell
