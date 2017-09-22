

typedef struct {

    int dni;
    char nombre[51];
    int edad;
    int estado;

} ePersonas;

int menu();

/**
 * \brief inicializa el estado al agregar una persona
 * \return el estado en 0
 */
void inicializar(ePersonas pers[], int tam);

/**
 * Obtiene el primer indice libre del array.
 * @param personas: el array se pasa como parametro.
 * @return el primer indice disponible
 */
int buscarLibre(ePersonas pers[], int tam);

/**
 * \brief ingresa los datos de una persona
 * \return da de alta una persona
 */
void agregar(ePersonas persona[], int tam);

/**
 * \brief borra los datos de una persona
 * \return da de baja una persona
 */
void borrar(ePersonas persona[], int tam);

/**
 * \brief ingresa los datos de varias personas
 * \return muestra los datos de varias personas
 */
void informar (ePersonas pers[], int tam);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param personas: el array se pasa como parametro.
 * @param dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarDni(ePersonas pers[], int tam, int auxDni);

/**
 * \brief ordena los datos de las personas por nombre/edad
 * \return muestra la lista de personas por nombre/edad
 */
void listar(ePersonas persona[], int tam);

/**
 * \brief grafico que muestra grupo de edades
 */
int graficoEdad(ePersonas pers[], int tam);



