#define val_Moyenne 40                                                       //constante qui permet de determiner à partir de quelle valeur on decide de travailler pour n'avoir que les pics du pouls et pas les pics d'interferance.

int val_Precedente = 0;                                                      //initialisation de variable globale
int tmp_Precedent = 0;

void setup() {
  Serial.begin(9600);                                                         // définit dans le setup la vitesse des transferts que notre programme va effectuer.  
}

void loop() {

  int recup_Val; //intialisation de variables dans le loop
  int tmp_Detection;

  recup_Val = analogRead(A0);                                                 //recup_Val va recevoir la valeur de analogRead(A0) (qui sert a avoir les données en A0, soit les données captées par le recepteur)

  if (recup_Val > val_Moyenne)                                                //si la valeur de recup_Val est supérieur à val_Moyenne, on teste une nouvelle condition, sinon on ne fait rien
  {             
      tmp_Detection = millis();                                               //Renvoie le nombre de millisecondes depuis que la carte Arduino a commencé à exécuter le programme courant dans la variable tmp_Detection
      if (tmp_Detection > (tmp_Precedent + 200))                              //si la condition précédente a été respecté, on regarde si tmp_Detection est supérieur à tmp_Precedent + 200 millisecondes
      {
        Serial.println ( (60000)/(tmp_Detection - tmp_Precedent),0);  //si oui, on affiche avec un retour chariot le calcule 
        tmp_Precedent = tmp_Detection;                                        // tmp_Precedent prend la valeur de tmp_Detection
      }
  }

  val_Precedente =  recup_Val;
}

/* Le but de se code va etre dans un premier temps de stocker dans la variable recup_Val la valeur capté par le recepteur en sortie A0
 *  Ensuite, on compare la valeur récupéré dans recup_Val avec la val_Moyenne pour savoir si on a affaire à un pic du poul ou un pic d'interferance.
 *  Si il s'agit bien d'un pic de poul (donc recup_Val > à val_Moyenne), on stock dans la variable tmp_Detection le moment ou le pic a pop.
 *  Toujours si recup_Val est supérieur à val_Moyenne, on fait une 2eme condition qui est tmp_Detection > (tmp_Precedent + 200)) ce qui permet d'etre sur que ce n'est pas une interferance.
 *  Si cette condition est validé, on fait un calcule permettant d'afficher les battements par minute.
 *  tmp-precedent prend la valeur de tmp_Detection
 *  val_Precdeent prend la valeur de recup_Val
  */
