// печатать самую длинную строку без каких-либо ограничений на ее размер.
int main(void){
  char *buf;
  char **s = (char **) malloc(sizeof(char *));
  for ( int i = 0; i < 4; i++){
    s[i] = (char*) malloc (sizeof(char));
    scanf("%s", s[i]);
  }
  for ( int i = 0; i < 4; i++){
    if (strlen(s[i]) > strlen(buf)){
      buf = (char*) malloc (strlen(s[i]) + 1);
      buf = s[i];
      }
  }
  printf("%s", buf);
}
