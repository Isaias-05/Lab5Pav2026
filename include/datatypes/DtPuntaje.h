#ifndef DTPUNTAJE_H
#define DTPUNTAJE_H

class DtPuntaje {
    private:
        string idLector;
        string codigoMaterial;
        int valorPuntaje;
    public:
        DtPuntaje();
        DtPuntaje(string idLector, string codigoMaterial, int valorPuntaje);
        ~DtPuntaje();

        string getIdLector();
        void setIdLector(string idLector);

        string getCodigoMaterial();
        void setCodigoMaterial(string codigoMaterial);

        int getValorPuntaje();
        void setValorPuntaje(int valorPuntaje);
}