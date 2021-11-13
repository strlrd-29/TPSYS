## Done by Ghribi Ouassim Abdelmalek

1.  **Reconnaître votre shell**
    
    ```bash
    echo $SHELL
    
    
    ```
    Reponse :
    
    > /bin/bash
    
2.  **Reconnaître votre systeme d'expoloitation**
    
    ```bash
    uname -a
    
    
    ```
    
    Response :
    
    > Linux strlrd29-virtual-machine 5.11.0-40-generic #44~20.04.2-Ubuntu SMP Tue Oct 26 18:07:44 UTC 2021 x86\_64 x86\_64 x86\_64 GNU/Linux
    
3.  **Changer votre mot de passe**
    
    ```bash
    passwd


    ```
    
    Reponse :
    
    > This command is used to change strlrd-29's password.
    
    > Changing password for strlrd-29
    >
    > Current password: \*\*\*\*\*
    >
    > New password: \*\*\*\*\*\*\***
    >
    > Retype new password: \*\*\*\*\*\*
    
    *ps: My userName on my virtual machine is strlrd-29*
    
4.  **Afficher la ligne (terminal) sur laquelle vous êtes connectés**
    
    ```bash
    tty
    
    
    ```
    Reponse :
    > /dev/pts/0

5. **Qui êtes-vous ?**
    
    - **whoami**
    
    
        - ```bash
            whoami
    
    
          ```
    Reponse :
    > strlrd-29

    - **who am i**


       - ```bash
         who am i
         
         
         ```
    Reponse :
    La commande ne retourne pas 
    
    *Observation*
    > Dans un shell, le premier mot (who) est analysé comme "la commande".
    > 
    >Ainsi, qui est recherché dans le PATH, et une fois trouvé, tous les autres paramètres/mots/arguments sont donnés à la commande en tant qu'arguments.
    >
    >Dans notre cas `am` et `i` sont ignoree par la commande `who`

6. **Qui est connecté sur la station ?**
    
    ```bash
    who
    
    
    ```
    Reponse :
    > strlrd-29 :0           2021-11-13 20:44 (:0)

7. **Création d’un fichier simple**
    ```bash
    cat > fic.txt
    bbbbbbbbbbbbbbbbbbb
    ccccccccccccccccccc
    aaaaaaaaaaaaaaaaaaa
    ```
    Reponse : 
    > Creation du fichier `fic.txt` et insertion des trois lignes.

8. **Visualisation de votre fichier**
    ```bash
    cat fic.txt
        
        
    ```
    Reponse : 
    > bbbbbbbbbbbbbbbbbbb
    > 
    >ccccccccccccccccccc
    >
    >aaaaaaaaaaaaaaaaaaa

9. **Compter le nombre de lignes, de mots, de caractères du fichier**
    ```bash
    wc fic.txt
    
    
    ```
    Reponse :
    > 3  3 60 fic.txt

10. **Recherche d’une chaîne dans un fichier**
    ```bash
    grep aa fic.txt
    
    
    ```
    Reponse : 
    > aaaaaaaaaaaaaaaaaaa

    *Observation* : 
    > Affiche les lignes ou la chaine `aa` a ete trouvee

11. **Quel est le répertoire courant**
    ```bash
    pwd
    
    
    ```
    Reponse :
    > /home/strlrd-29

12. **Lister les fichiers dans le répertoire courant**
    - **ls**
        - ```bash
          ls
          
          
            ```
    Reponse : 
    > Desktop      |   Downloads  |  key.txt  |  Pictures  |  Public  |  Templates  |  test.exe  |
    >--------------|--------------|-----------|------------|----------|-------------|------------|
    > Documents    |  fic.txt     |  Music    |  projects  |  snap    |  test.c     |  Videos    | 

    *Observation* : 
    La commande `ls` affiche les informations sur les fichiers contenu dans le repertoire courant
    - **ls -l**
        - ```bash
          ls -l
          
          ```
    Reponse : 
    > total 68
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Nov 13 21:26 Desktop
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Documents
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Nov  6 00:26 Downloads
    > 
    > -rw-rw-r-- 1 strlrd-29 strlrd-29     0 Nov 13 21:22 fic.txt
    > 
    > -rw------- 1 strlrd-29 strlrd-29    41 Nov  7 21:15 key.txt
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Music
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Pictures
    > 
    > drwxrwxr-x 3 strlrd-29 strlrd-29  4096 Nov 10 21:18 projects
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Public
    > 
    > drwx------ 3 strlrd-29 strlrd-29  4096 Oct 18 17:33 snap
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Templates
    > 
    > -rw-rw-r-- 1 strlrd-29 strlrd-29   243 Nov  8 10:02 test.c
    > 
    > -rwxrwxr-x 1 strlrd-29 strlrd-29 16912 Nov  8 10:00 test.exe
    > 
    > drwxr-xr-x 2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Videos

    *Observation* : 
    
