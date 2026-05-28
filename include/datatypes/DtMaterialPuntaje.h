#ifndef DTMATERIALFULL_H
#define DTMATERIALFULL_H


class DtMaterialFull {
    private:
        string codigo;
        string titulo;
        float puntajePromedio;
        
    public:
        DtMaterialFull();
        DtMaterialFull(string codigo, string titulo, float puntajePromedio);
        ~DtMaterialFull();

        string getCodigo();
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);


        float getPuntajePromedio();
        void setPuntajePromedio(float puntajePromedio);

   
}