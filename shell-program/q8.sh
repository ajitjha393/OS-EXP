
#PROCESS SORTED BY MEMORY
ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem | head -n 11


# -----------------------------
# OUTPUT :
#   PID  PPID CMD                         %MEM %CPU
#  1796  1656 /usr/bin/gnome-shell         9.4  6.2
#  3287  3066 /opt/google/chrome/chrome -  7.7  1.7
#  2942  2708 /usr/share/code/code --type  7.3 10.3
#  3051     1 /opt/google/chrome/chrome    4.6  5.6
#  4595  3066 /opt/google/chrome/chrome -  4.4  4.2
#  1118     1 /usr/sbin/mysqld --daemoniz  4.3  0.0
#  3521  3066 /opt/google/chrome/chrome -  4.2  2.6
#  2198  1656 /usr/bin/gnome-software --g  3.6  0.0
#  5376  3066 /opt/google/chrome/chrome -  3.3 24.1
#  3508  3066 /opt/google/chrome/chrome -  3.3  1.8
