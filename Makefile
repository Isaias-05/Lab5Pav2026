#DIRECTORIOS
BINDIR = bin
OBJDIR = obj
INCLUDEDIR = include
CONTROLADORDIR = controladores
DATATYPESDIR = datatypes
DOMINIODIR = dominio
ENUMDIR = enums
FABRICADIR = fabrica
MANEJADORESDIR = manejadores
SESIONDIR = sesiones
SRCDIR = src


#COMPILADOR Y FLAGS
CXX = g++
CXXFLAGS = -I $(INCLUDEDIR)

#FUENTES SIN EXTENSION
SOURCES = \
  Sesion \
  Usuario Revista Material Puntaje Libro Prestamo Lector Funcionario \
  DtRevistaFull DtPuntaje DtPrestamoLector DtPrestamo DtMaterialPuntaje \
  DtMaterialPrestado DtMaterialFull DtMateria DtLibroFull DtLector DtFecha \
  ManejadorMaterial ManejadorUsuario \
  Fabrica \
  ControladorIniciarSecion ControladorEliminarMaterial ControladorCerrarSesion \
  ControladorPrestamoLector ControladorPuntuarMaterial ControladorRegistrarFuncionario \
  ControladorRegistrarLector ControladorRegistrarMaterial ControladorVerInformacionMaterial \
  ControladorEliminarLector IControladorIniciarSesion IControladorEliminarMaterial IControladorEliminarLector \
  IControladorCerrarSesion IControladorPrestamoLector IControladorPuntuarMaterial IControladorRegistrarFuncionario \
  IControladorRegistrarLector IControladorRegistrarMaterial IControladorVerInformacionMaterial


TARGET = $(BINDIR)/main

#LISTA OBJESTOS
#obs: con addprefix le agregamos la ruta $OBJDIR y con addsuffix la extención a cada $(SOURECES)
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SOURCES)))


#TARGET PRINCIPAL
$(TARGET): $(OBJDIR)/main.o $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) $(OBJDIR)/main.o $(OBJS) -o $(BINDIR)/main

# REGLA ESPECIFICA PARA MAIN (en obj/, sin .h específico)
$(OBJDIR)/main.o: $(SRCDIR)/main.cpp
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

# REGLA PARA COMPILAR GENERICA .cpp a .o en obj/
$(OBJDIR)/%.o: $(SRCDIR)/$(CONTROLDIR)/%.cpp $(INCLUDEDIR)/$(CONTROLDIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(DATATYPESDIR)/%.cpp $(INCLUDEDIR)/$(DATATYPESDIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(DOMINIODIR)/%.cpp $(INCLUDEDIR)/$(DOMINIODIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(ENUMDIR)/%.cpp $(INCLUDEDIR)/$(ENUMDIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(FABRICADIR)/%.cpp $(INCLUDEDIR)/$(FABRICADIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(MANEJADORESDIR)/%.cpp $(INCLUDEDIR)/$(MANEJADORESDIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/$(SESIONDIR)/%.cpp $(INCLUDEDIR)/$(SESIONDIR)/%.h
	mkdir -p $(OBJDIR)
	$(CXX) -c $< $(CXXFLAGS) -o $@



# Limpiar archivos generados
clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: clean


#