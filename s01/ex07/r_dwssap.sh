cat /etc/passwd | grep -v '#' | sed -e "s/:\*:.*//" | rev | sed -n "n;p" | sort -r | tr '\n' ' ' | tr -d '\n' | awk 'NR >= FT_LINE1 && NR <= FT_LINE2'
