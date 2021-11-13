## Done by Ghribi Ouassim Abdelmalek <img src="https://media.giphy.com/media/hvRJCLFzcasrR4ia7z/giphy.gif" width="25px"></a>

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

    *Observation* : Répertoriez tous les fichiers et dossiers avec plus de détails tels que la date de mise à jour, les autorisations utilisateur, le propriétaire du fichier. (sans les fichier et dossiers caches)
    - **ls -al**
        - ```bash
          ls -al
          
          
          ```
    Reponse : 
    > total 176
    > 
    > drwxr-xr-x 22 strlrd-29 strlrd-29  4096 Nov 13 22:01 .
    > 
    > drwxr-xr-x  3 root      root       4096 Oct 18 17:22 ..
    > 
    > -rw-rw-r--  1 strlrd-29 strlrd-29    92 Nov  7 22:42 .bash_aliases
    > 
    > -rw-------  1 strlrd-29 strlrd-29 30935 Nov 13 21:58 .bash_history
    > 
    > -rw-r--r--  1 strlrd-29 strlrd-29   220 Oct 18 17:22 .bash_logout
    > 
    > -rw-rw-r--  1 strlrd-29 strlrd-29  3354 Oct 22 15:43 .bash-powerline.sh
    > 
    > -rw-r--r--  1 strlrd-29 strlrd-29  3798 Oct 23 13:27 .bashrc
    > 
    > drwx------ 26 strlrd-29 strlrd-29  4096 Nov  5 17:36 .cache
    > 
    > drwx------ 23 strlrd-29 strlrd-29  4096 Nov  4 22:51 .config
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Nov 13 21:26 Desktop
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Documents
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Nov  6 00:26 Downloads
    > 
    > -rw-rw-r--  1 strlrd-29 strlrd-29    87 Nov  4 17:40 .gitconfig
    > 
    > drwx------  3 strlrd-29 strlrd-29  4096 Nov  5 18:26 .gnupg
    > 
    > -rw-rw-r--  1 strlrd-29 strlrd-29     0 Oct 19 14:42 .hidden-file
    > 
    > -rw-------  1 strlrd-29 strlrd-29    41 Nov  7 21:15 key.txt
    > 
    > -rw-------  1 strlrd-29 strlrd-29    28 Nov  5 17:45 .lesshst
    > 
    > drwxr-xr-x  5 strlrd-29 strlrd-29  4096 Nov  3 21:49 .local
    > 
    > drwx------  5 strlrd-29 strlrd-29  4096 Oct 18 17:46 .mozilla
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Music
    > 
    > drwxrwxr-x  5 strlrd-29 strlrd-29  4096 Nov  8 20:21 .npm
    > 
    > -rw-r--r--  1 strlrd-29 strlrd-29   306 Oct 19 09:37 .pam_environment
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Pictures
    > 
    > -rw-r--r--  1 strlrd-29 strlrd-29   807 Oct 18 17:22 .profile
    > 
    > drwxrwxr-x  3 strlrd-29 strlrd-29  4096 Nov 10 21:18 projects
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Public
    > 
    > -rw-------  1 strlrd-29 strlrd-29     0 Oct 19 15:22 .python_history
    > 
    > drwx------  3 strlrd-29 strlrd-29  4096 Oct 18 17:33 snap
    > 
    > drwx------  2 strlrd-29 strlrd-29  4096 Oct 18 17:33 .ssh
    > 
    > -rw-r--r--  1 strlrd-29 strlrd-29     0 Oct 19 15:49 .sudo_as_admin_successful
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Templates
    > 
    > drwx------  6 strlrd-29 strlrd-29  4096 Oct 18 17:45 .thunderbird
    > 
    > drwxr-x---  3 root      root       4096 Nov  3 18:31 .var
    > 
    > drwxr-xr-x  2 strlrd-29 strlrd-29  4096 Oct 18 17:31 Videos
    > 
    > -rw-------  1 strlrd-29 strlrd-29 13223 Nov  5 18:50 .viminfo
    > 
    > drwxrwxr-x  3 strlrd-29 strlrd-29  4096 Nov  3 21:08 .yarn
    > 
    > -rw-rw-r--  1 strlrd-29 strlrd-29   116 Nov  7 20:40 .yarnrc
    
    *Observation :* Répertoriez tous les fichiers et dossiers avec plus de détails tels que la date de mise à jour, les autorisations utilisateur, le propriétaire du fichier et la taille du fichier en octets.(les fichiers et dossier caches sont aussi inclus)
    
13. **Copier un fichier**
    ```bash
    cp fic.txt fic_copie.txt 
    
    
    ```
    Reponse :
    > Les contenus du fichier `fic.txt` sont coppiees vers le nouveau fichier `fic_copie.txt`

14. **Renommer un fichier**
    ```bash
    mv fic_copie.txt nouveau_nom.txt
    
    
    ```
    Reponse :
    > La commande mv permet de renommer les fichiers dans notre cas on a renommer le fichier `fic.txt` en `nouveau_nom.txt` et on peut verifier en executant la commande `ls`

15. **Effacer un fichier**
    ```bash
    rm nouveau_nom.txt
    
    
    ```
    Reponse :
    > La commande `rm` permet de supprimer un fichier ou plusieurs fichiers dans notre cas on a supprimer le fichier `nouveau_nom.txt` on peut verifier par `ls`

16. **Créer un répertoire**
    ```bash
    mkdir mon_repertoire
    
    
    ```
    Reponse : 
    > Un nouveau repertoire est cree `mon_repertoire`

17. **Changer de repertoire**
    ```bash
    cd mon_repertoire
    
    
    ```
    Reponse :
    ```bash
    ~/mon_repertoire $
    
    
    ```
    *Observation* : La commande `cd` permet de changer le repertoire courant
    
18. **Revenir au répertoire précédent**
    ```bash
    cd ..
    
    
    ```
    Reponse :
    `~/`
    
    *Observation* : `..` precede par `cd` permet de remonter d'un niveau de repertoire
   
19. **Effacer un répertoire**
    ```bash
    rmdir mon_repertoire
    
    
    ```
    Reponse : 
    > Le repertoire `mon_repertoire` est efface defenitivement

