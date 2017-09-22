

    /** \brief realiza la suma de 2 numeros
     *
     * \param num1 float
     * \param num2 float
     * \return retorna el resultado de la suma float
     *
     */

float sumar (float x, float y)
{

    float suma;

    suma = x + y;

    return suma;
}


    /** \brief realiza la resta de 2 numeros
     *
     * \param num1 float
     * \param num2 float
     * \return retorna el resultado de la resta float
     *
     */
float restar (float x, float y)
{
    float resta;

    resta = x - y;

    return resta;
}


    /** \brief realiza la division entre 2 numeros
     *
     * \param num1 float
     * \param num2 float
     * \return retorna el resultado de la division float
     *
     */
float dividir (float x, float y)
{
    float cociente;

    cociente = x / y;

    return cociente;
}


/** \brief realiza la multiplicacion de 2 numeros
     *
     * \param num1 float
     * \param num2 float
     * \return retorna el resultado de la multiplicacion float
     *
     */
float multiplicar (float x, float y)
{
    float producto;

    producto = x * y;

    return producto;
}

/** \brief realiza el factorial de un numero entero
     *
     * \param num1 float
     * \param
     * \return retorna el factorial del numero float
     *
     */
float factorial (float x)
{

    if(x==1)
    {
        return 1;
    }

    return x*factorial(x-1);
}

