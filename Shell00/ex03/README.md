# Subject
Create your own SSH key. Once done:
- Add your public key to your repository in a file named **id_rsa_pub**.
- Update your SSH key on the intranet. This will allow you to push the repository to our git server.

# Explanation
The `ssh-keygen` command allows you to generate the public key:
```
ssh-keygen
```
The command `cd` filters the directory that has these files:
```
cd ~/.ssh
ls
```
The key is in the file **id_rsa.pub**.
The command `cat` shows the key content. Copy the key content and paste it in the file **id_rsa_pub**.
```
cat id_rsa.pub
```