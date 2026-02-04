#include <stdio.h>
#include <assert.h>

int main(){
	// in C (void*)0 and 0 are the same as NULL
	assert(((void*)0) == NULL);
	assert(0 == NULL);

	return 0;
}
