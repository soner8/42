ldapsearch -Q uid="z*" | grep "cn:" | sort -rd | cut -d ':' -f 2 | cut -c2-
