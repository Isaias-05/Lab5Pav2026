#ifndef DTFECHA
#define DTFECHA

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;
	public:
		DtFecha();
		DtFecha(int, int, int);
		~DtFecha();
        int getDia() const;
        int getMes() const;
        int getAnio() const;
};
#endif