// from https://youtu.be/gtk3RZHwJUA

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned int head;
	unsigned int capacity;
} Metadata;

#define MAX_SIZE 1

// after realloc we must ensure our array variable is in the correct address
#define push(data, x) do{ \
		if((data) == NULL){ \
			Metadata* tmp = (Metadata*)malloc(sizeof(*data)*MAX_SIZE + sizeof(Metadata)); \
			if(tmp == NULL) exit(EXIT_FAILURE); \
			tmp->head = 0; \
			tmp->capacity = MAX_SIZE; \
			data = (void*)(tmp + 1); \
		} \
		Metadata* meta = (Metadata*)(data) - 1; \
		if(meta->head >= meta->capacity-1){\
			meta->capacity *= 2;\
			meta = realloc(meta, sizeof(*data)*meta->capacity + sizeof(Metadata));\
			data = (void*)(meta+1);\
		}\
		(data)[meta->head++] = (x); \
	}while(0)

#define pop(data) do{ \
		if((data) != NULL){ \
			Metadata* meta = (Metadata*)(data) - 1; \
			if(meta->head > 0) meta->head--; \
		} \
	}while(0)


// to deallocate we need to point it to the first address we allocated (the metadata)
#define free_data(data) free((Metadata*)(data) - 1)

#define arr_size(data) ((data) ? ((Metadata*)(data) - 1)->head : 0)

int main(){
	int* data = NULL;
	push(data, 1);
	push(data, 5);
	push(data, 12);
	pop(data);
	pop(data);
	
	printf("%d\n", arr_size(data));
	for(unsigned int i = 0; i < arr_size(data); i++)
		printf("I=%d; v=%d\n", i, data[i]);

	free_data(data);

	return 0;
}
