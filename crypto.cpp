//Samson APLOGAN

#include <iostream>
using namespace std ;

string chiffrement_cesar(string message, int cle) {
    string chiffre = "";
    for (int i = 0; i < message.length(); i++) {
        char lettre = message[i];
        if (lettre >= 'a' && lettre <= 'z') {
            lettre = ((lettre - 'a' + cle) % 26) + 'a';
        } else if (lettre >= 'A' && lettre <= 'Z') {
            lettre = ((lettre - 'A' + cle) % 26) + 'A';
        }
        chiffre += lettre;
    }
    return chiffre;
}

string dechiffrement_cesar(string chiffre, int cle) {
    string message = "";
    for (int i = 0; i < chiffre.length(); i++) {
        char lettre = chiffre[i];
        if (lettre >= 'a' && lettre <= 'z') {
            lettre = ((lettre - 'a' - cle + 26) % 26) + 'a';
        } else if (lettre >= 'A' && lettre <= 'Z') {
            lettre = ((lettre - 'A' - cle + 26) % 26) + 'A';
        }
        message += lettre;
    }
    return message;
}
int main()
{      string texte;
        int q;
       int key;
       string resultat='';
    cout<<'vouler vous chiffrer ou dechiffrer un texte ?'<<endl;
    cout<<'entrer 1 pour le chiffrement et 2 pour le dechiffrement'
    cin>>q;
    if (q==1)
    {

    cout<<'entrer votre chaine de caractere'<<endl;
    cin>>texte;
    cout<<'entrer votre cle'<<endl;
    cin>>key;
    resultat=chiffrement_cesar(texte,key);
    cout<<'Votre texte chiffre donne ';
    cout<<resultat<<endl;
} else if (q==2)
{
     cout<<'entrer votre chaine de caractere'<<endl;
    cin>>texte;
    cout<<'entrer votre cle'<<endl;
    cin>>key;
    resultat=dechiffrement_cesar(texte,key)
    cout<<'votre texte dechiffrer donne: ';
    cout<<resultat;

}
else {
    cout<<'entrer soit 1 soit 2 comme nombre';
    cout<<'vouler vous chiffrer ou dechiffrer un texte ?'<<endl;
    cout<<'entrer 1 pour le chiffrement et 2 pour le dechiffrement'
    cin>>q;
    
}
    


    return 0;
}