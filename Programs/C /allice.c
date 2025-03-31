#include <stdio.h>
int main() {
char name[] = "Alice"; // Implicit null character "10
// Accessing characters
for(int i=0; name[i] != '\0'; i++) {
printf("%c", name[i]); // Print each character
}
return 0;
}