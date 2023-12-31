#ifndef DATA
#define DATA
#include <string>
#include "DtFechaHora.h"
#include "enumFuente.h"
#include "enumTipoDato.h"
#include "Juego.h"

using namespace std;

class Data{
    private:
        int idData;                                             //Identificador de la partida. Para separar las diferentes versiones de una misma
        Juego* juego; 
        string nombreData;
        list<string> directorioLocal;                                       //Dirección del archivo en el sistema
        string directorioCloud;
        string comentariosJugador;
        DtFechaHora* fechaUltModificacion; 
        EnumFuente plataformaFuente; 
        EnumTipoDato tipoDato;
    public:
        Data();
        Data(int idData, Juego* juego, string nombreData, list<string> directorioLocal, string directorioCloud, string comentariosJugador, DtFechaHora* fechaUltModificacion, EnumFuente plataformaFuente, EnumTipoDato tipoDato);
        int getIdData();
        void setIdData(int idData);
        Juego* getJuego();
        void setJuego(Juego* juego);
        string getNombreData();
        void setNombreData(string nombreData);
        list<string> getDirectorioLocal();
        void setDirectorioLocal(list<string> directorioLocal);
        string getDirectorioCloud();
        void setDirectorioCloud(string directorioCloud);
        string getComentariosJugador();
        void setComentariosJugador(string comentariosJugador);
        DtFechaHora* getFechaUltModificacion();
        void setFechaUltModificacion(DtFechaHora* fechaUltModificacion);
        EnumFuente getPlataformaFuente();
        void setPlataformaFuente(EnumFuente plataformaFuente);
        EnumTipoDato getTipoDato();
        void setTipoDato(EnumTipoDato tipoDato);
        ~Data();
};


#endif