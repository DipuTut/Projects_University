# Sample Makefile for...

# objektitiedostot
OBJS =	animal.o guineapig.o zoomain.o zoo.o tortoise.o cat.o mammal.o
SRC = *.cc

# kääntäjien yms. määrittely
CXX = tutg++
CXXFLAGS =
DEPXX = g++ -MM
DEPFILE = makefile.dep
EXE = zoo

# Linkkauskomennon määrittäminen
XXLNK = $(CXX) -o $@ $(CXXFLAGS) $^

# 
# First rule is a default rule, executed with only "gmake"
default: $(EXE)


# gmake name_of_executable program defined in EXE
$(EXE): $(OBJS)
	$(XXLNK)


# removes all the object files and makefile.dep file
clean:
	-rm $(OBJS) $(EXE) $(DEPFILE)

# Object files are compiled using ..., dependencies are found
# from DEPFILE file
%.o: %.cpp		
	$(CXX) -c $(CXXFLAGS) $<

# finds out the file dependencies automatically and adds them to a file
$(DEPFILE):
	$(DEPXX) $(SRC) > $(DEPFILE)

depend:
	@echo "Updating $(DEPFILE)"
	$(DEPXX) $(SRC) > $(DEPFILE)

# include information from dependency file to this file
include $(DEPFILE)
