# Sistem de irigare automată

## Descriere

Acest proiect reprezintă un sistem de irigare automată realizat cu placa Arduino UNO. Sistemul monitorizează permanent umiditatea solului cu ajutorul unui senzor de umiditate și comandă automat o pompă de apă prin intermediul unui modul releu.

Atunci când senzorul detectează că solul este uscat, Arduino activează releul și pornește pompa. După ce umiditatea solului revine sub pragul stabilit, pompa este oprită automat.

Proiectul a fost realizat în cadrul lucrării de licență și demonstrează utilizarea unui microcontroler pentru automatizarea procesului de irigare.

---

## Repository

https://github.com/BogdanGY/Sistem_irigare_automat

---

## Structura proiectului

```
README.md
licenta_program.ino
```

---

## Cerințe software

- Arduino IDE 2.x
- Driver Arduino UNO
- Windows 10 sau Windows 11

---

## Cerințe hardware

- Arduino UNO
- Senzor de umiditate YL-69 + modul YL-38
- Modul releu 5V
- Pompă submersibilă DC
- Fire jumper
- Cablu USB

---

## Pașii de compilare

1. Instalați Arduino IDE.
2. Deschideți fișierul `licenta_program.ino`.
3. Din meniul **Tools → Board** selectați **Arduino UNO**.
4. Din meniul **Tools → Port** selectați portul COM corespunzător.
5. Apăsați butonul **Verify** pentru compilarea proiectului.
6. Dacă nu apar erori, apăsați **Upload** pentru încărcarea programului pe placă.

---

## Instalare

1. Conectați senzorul de umiditate la Arduino.
2. Conectați modulul releu la pinul digital 7.
3. Conectați pompa la contactul NO al releului.
4. Introduceți pompa într-un recipient cu apă.
5. Alimentați placa Arduino prin cablul USB.

---

## Lansarea aplicației

1. Deschideți Serial Monitor la viteza de 9600 baud.
2. Introduceți senzorul în sol.
3. Sistemul citește permanent umiditatea.
4. Dacă valoarea depășește pragul stabilit, pompa pornește automat.
5. Dacă umiditatea crește peste limita stabilită, pompa este oprită.

---

## Autor

Bogdan Gy
