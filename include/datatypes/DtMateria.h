#ifndef MATERIAL_H
#define MATERIAL_H

class DtMaterial {
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
    public:
        DtMaterial();
        DtMaterial(string codigo, string titulo, int anioPublicacion);
        ~DtMaterial();

        string getCodigo();
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);

        int getAnioPublicacion();
        void setAnioPublicacion(int anioPublicacion);
};