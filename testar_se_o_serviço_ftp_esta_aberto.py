#!/usr/bin/python


import socket #importando o socket

s=socket.socket(socket.AF_INET, socket.SOCK_STREAM) # montando o socket


s.connect(("192.168.1.103",21)) 

r= s.recv(1024)
print r         # recebendo e printando

s.send("USER teste\r\n") # mandando teste como usuario
r = s.recv(1024)
print r      # recebendo e printando na tela


s.send("PASS teste\r\n") # mandando teste como senha
r = s.recv(1024)
print r  # recebendo e printando na tela