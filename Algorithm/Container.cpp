#include "Container.h"
#include <cstdlib>

#define INPUT1_EXCEPTION_MESSAGE  "Error! Putting in container\n"
#define INPUT2_EXCEPTION_MESSAGE  "Error! Adding to container\n"

// Инициализация контейнера
void Init(container* c) {
	c->len = 0;
}

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container* c) {
	for (int i = 0; i < c->len; i++) {
		delete c->cont[i];
	}
	c->len = 0;
}

void Input(container* c, FILE* input_file_name) {
    int count;
    int status_code = fscanf(input_file_name, "%d\n", count);
    if (status_code == 1) {
        for (int i = 0; i < count; ++i) {
            if (c->len < 10001) {
                transport* tr;
                Input(tr, input_file_name);

                c->cont[i] = tr;
                c->len++;
            }
            else {
                printf(INPUT2_EXCEPTION_MESSAGE);
                return;

            }
        }
    }
    else {
        printf(INPUT1_EXCEPTION_MESSAGE);
    }
}


void Output(container* c, FILE* output_file_name) {
    fprintf(output_file_name, "Count of elements in contains -  %s\n", c->len);
    for (int i = 0; i < c->len; ++i) {
        fprintf(output_file_name, "%s. ", i);
        Output(c->cont[i], output_file_name);
    }
}

int Add(container* ct, transport* tr) {
	if (ct->len >= MAX_CONTAINER_SIZE - 1) {
		return 0;
	}
	ct->cont[(ct->len)++] = tr;
	return 1;
}

void Sort(container* c) {
    int step = 1;
    transport* tmp = (transport*)malloc(c->len * sizeof(int));
    while (step < c->len)
    {
        int index = 0;
        int l = 0;
        int m = l + step;
        int r = l + step * 2;
        do
        {
            m = m < c->len ? m : c->len;
            r = r < c->len ? r : c->len;
            int i1 = l, i2 = m;
            for (; i1 < m && i2 < r; )
            {
                if (MaxDistance(c->cont[i1]) < MaxDistance(c->cont[i2])) { tmp[index++] = *c->cont[i1++]; }
                else { tmp[index++] = *c->cont[i2++]; }
            }
            while (i1 < m) tmp[index++] = *c->cont[i1++];
            while (i2 < r) tmp[index++] = *c->cont[i2++];
            m += step * 2;
            r += step * 2;
        } while (l < c->len);
        for (int i = 0; i < c->len; i++)
            c->cont[i] = &tmp[i];
        step *= 2;
    }
}


