#include <stdio.h>
#include <unistd.h>
int main(int argc, char** argv){
	int n = atoi(argv[1]);
	int vet[] = malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}
	
	int i=0;
	for(i=0; i<n-1; i++){
		pid_t pid = fork();
		if(pid > 0){
			waitpid(pid);
			break;
		}

	}

	fprintf(stdout, "vet[%d] = %d", i, vet[i];
}