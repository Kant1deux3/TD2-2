# TD2-2
Conversion décimale vers binaire sur 8 bits

Algorithme :

nb ← entier
tabr[8] ← entier
i ← entier
rec ← caractère

Début :
{
	répéter
	{
		
		répéter 
		{
			Afficher ("Donnez un nombre entre 0 et 255.")
			Lecture clavier → nb
		}
		jusqu’à (nb>0 et nb<255)

		i ← 0
		Pour (i=0; i=8; i ← i+1)
		{
			tabr[i] ← 0
		}

		i ← 0
		répéter
		{
			tabr[i] ← nb modulo 2;
			nb ← nb/2
			i ← i+1
		}jusqu’à(nb/=0)

		
		Afficher("Le résultat binaire est :" ← tabr[7], tabr[6], tabr[5], tabr[4], tabr[3], tabr[2], tabr[1], tabr[0])
		Afficher("\Voulez-vous recommencer ?")
		Lecture clavier → rec
	}Jusqu’à(rec /= n)
  Afficher("Fin")
}
