# Compte rendu TP1 systeme d'exploitation

## Done by Ghribi Ouassim Abdelmalek <img src="https://media.giphy.com/media/hvRJCLFzcasrR4ia7z/giphy.gif" width="25px"></a>![Linux Image](https://camo.githubusercontent.com/566080f1f10a299450280c8b9430bf6c24ce39b71098ccee2ffed461c1b151d3/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c696e75782d626c61636b3f7374796c653d666c61742d737175617265266c6f676f3d6c696e7578)


# Table of Contents
1. [Part I](#PartI)
2. [Gestion des processus](#partii--gestion-des-processus)
3. [La compilation sous UNIX](#partiii--la-compilation-sous-unix)


# **PartI**


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

# **PartII : Gestion des processus**

1. **Obtenir l’UID et le GID**

    ```bash
   id


    ```

    Reponse :
    > uid=1000(strlrd-29) gid=1000(strlrd-29) groups=1000(strlrd-29),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),120(lpadmin),132(lxd),133(sambashare)

    *Observation*: 
    > La commande `id` sous Linux est utilisée pour trouver les noms d'utilisateur et de groupe et les ID numériques (UID ou ID de groupe) de l'utilisateur actuel ou de tout autre utilisateur du serveur.

2. **Visualiser les processus**

    . `ps`
    

    Reponse :
    
    **La commande `ps` permet de Connaître les processus actifs ainsi que ces ressources à un moment donné**
    
    > PID      |   TTY  |  TIME     |  CMD   |
    >----------|--------|-----------|--------|
    > 3514     |  pts/0 |  00:00:00 |  bash  | 
    > 3683     |  pts/0 |  00:00:00 |  ps    |
        
    
    . `ps -u nom_utilisateur`
    
    
    Reponse :
    
    **L'option "-u nom_utilisateur" affiche chaque processus associés à utilisateur**
    
    
    > | USER  |  PID |  %CPU |  %MEM |  VSZ |  RSS | TTY |  STAT |  START |  TIME | COMMAND   |
    > |---|---|---|---|---|---|---|---|---|---|---|
    > | strlrd-+  |    1606   |  0.0  |  0.1  | 172656    |  6504 | tty2  |     Ssl+  | 09:29 |   0:00    | /usr/lib/gdm3 |
    > | strlrd-+   | 1609 | 0.3 | 1.3 |287196 |66312| tty2   |  Sl+ | 09:29  | 0:04 |/usr/lib/xorg |
    > |strlrd-+   | 1646 | 0.0 | 0.3 |199424 | 15324 | tty2 |    Sl+ | 09:29 |  0:00 | /usr/libexec/ |
    > |strlrd-+    |3514  |0.0  |0.1  |19656  |5340 |pts/0    |Ss   |09:30   |0:00 |bash|
    > | strlrd-+    |3748  |0.0  |0.0  |20136  |3312| pts/0    |R+   |09:55   |0:00 | ps -u|
    

# **PartIII : La compilation sous UNIX**

1. **Creation de Processus fork()**

Reponse :
> Valeur retournée par la fonction fork: 5703                                                                                                          
> Je suis le processus numéro 5702                                                                                                                      
> Valeur retournée par la fonction fork: 0                                                                                                             
> Je suis le processus numéro 5703
    
*Observation:* 

> L'appel système fork est utilisé pour créer un nouveau processus, appelé processus enfant, qui s'exécute en même temps que le processus qui effectue l'appel fork()
> (processus parent).
> 
>  Après la création d'un nouveau processus enfant, les deux processus exécuteront l'instruction suivante après l'appel système fork().
> 
>  Un processus enfant utilise le même PC (compteur de programme), les mêmes registres CPU, les mêmes fichiers ouverts que ceux utilisés dans le processus parent.
>
> Dans notre cas a chaque fois qu'on execute le programme on remarque qu'on a deux output dont le premier est du processus parent et le deuxieme du processus enfant qui a ete généré par la fonction `fork()`  et on remarque qu'apres plusieurs execution que le `PID` du processus enfant change a chaque appel du programme mais le `PID` du processus parent ne change pas.

*On ajoute `sleep(4)`* et on remarque qu'on a le même output mais après avoir attendu 4 secondes a cause de la fonction `sleep(4)`

2. **Synchronisation de processus père et fils (mécanisme wait/exit)**

    **Output**
    
    ```
    Je suis le processus père num=3701 
    ********
    * PERE *
    ********
    Proc père num= 3701 -
     Fils num= 3702 
    J’attends la fin de mon fils: 
                    ********
                    * FILS * 
                    ********
                    Proc fils num= 3702 - 
                    Père num= 3701 
                    Je vais dormir 30 secondes ...
                    Je me reveille , 
                    Je termine mon execution par un EXIT(7)
    Mon fils de num=3702 est termine,
    Son état était :700
    ```

    Reponse :
    
    > Comme on fait un switch sur la variable `valeur` et dans l'output du programe on a au début l'exécution de `default case` c'est a dire que `valeur != -1 && valeur != 0` donc on est dans le processus parent avec un `pid = 3701` qui s'execute jusqu'a arriver a la fonction `wait(&etat)` qui permet a le processus pere d'attendre jusqu'a la fin de l'exécution du processus fils pour continuer son exécution ce qu'on voit dans les deux dernieres lignes.
    > 
    > Le processus fils termine son exécution avec un `exit(7)` ce qui permet au processus pere de savoir l'etat de son fils. 

3. **Fonctionnement de exec**
    
    Output:
    ```
    Je suis le processus 4243 je vais faire fork
     Père numéro 4243 attend
     Coucou ! je suis le fils 4244
     4244 : Code remplace par /usr/bin/ps
     Utilisation : /usr/bin/ps fic. à exécuter ! 
      Le fils était : 4244  ... son état était :100 (hexa)
    ```
    
    Reponse:
     
    > La fonction execl() remplace l'image de processus actuelle par une nouvelle image de processus spécifiée par path. La nouvelle image est construite à partir d'un fichier exécutable régulier appelé le nouveau fichier image de processus. Aucun retour n'est effectué car l'image de processus appelante est remplacée par la nouvelle image de processus.

4. **Synchronisation avec sémaphores**

    Reponse :
    
    **Je n'ai pas pu ececuter le programme**
