all: ogl3d.exe

VERSION = 1.0
GAME = 0
TARGET = ogl3d.exe

all:
	$(info Version:        $(VERSION))
	$(info Game:           $(GAME))
	$(info Target:         $(TARGET))
	$(info Building Game...)
	mkdir -p build
	g++ -c "src/engine/camera.cpp" -o "obj/camera.o"
	g++ -c "src/engine/engine.cpp" -o "obj/engine.o"
	g++ -c "src/engine/ai.cpp" -o "obj/ai.o"
	g++ -c "src/main.cpp" -o "obj/main.o"
	g++ -o build/$(TARGET) obj/camera.o obj/engine.o obj/ai.o obj/main.o  -lopengl32 -lglu32 -lgdi32
